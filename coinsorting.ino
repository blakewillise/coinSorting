#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <EEPROM.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); // 0x27 is the I2C bus address for an unmodified module

const int coin1  = A0;    //input from ir sensor
const int coin2 = A1;
const int coin5  = A2;
const int coin10 = A3;
const int btn = 2;
int spr1, spr2, spr5, spr10, btnState = 0;
int count1, count2, count5, count10, total = 0;


void(* resetFunc) (void) = 0;
void setup() {
  Serial.begin(9600);
  pinMode(coin1 , INPUT);
  pinMode(coin2 , INPUT);
  pinMode(coin5, INPUT);
  pinMode(coin10, INPUT);
  pinMode(btn, INPUT_PULLUP);
  lcd.noBacklight(); // You can turn the backlight off by setting it to LOW instead of HIGH
  lcd.begin(16, 2);
  lcd.write(EEPROM.read(5));
  lcd.setCursor(0, 0);
  lcd.print("Welcome");
  delay(3000);
}

void loop() {
  btnState = digitalRead(btn);

  if (btnState == LOW) {
    lcd.clear();
    delay(1000);
    lcd.setCursor(0, 0);
    lcd.print("THANKS");
    delay(2000);
    resetFunc();
    
  } else {
    spr1 = analogRead(coin1); //read the state of coi100n and store it as ir100
    spr2 = analogRead(coin2); //read the state of coi100n and store it as ir200
    spr5 = analogRead(coin5); //read the state of coi100n and store it as ir500
    spr10 = analogRead(coin10);


    if (spr1 <= 10) {
      count1 += 1;
      delay(100);
    }
    if (spr2 <= 10) {
      count2 += 2;
      delay(100);
    }
    if (spr5 <= 10) {
      count5 += 5;
      delay(100);
    }

    if (spr10 <= 10) {
      count10 += 10;
      delay(100);
    }

    total = count1 + count2 + count5 + count10;
    EEPROM.write(5, total);
    lcd.setCursor(0, 1);
    lcd.print("TOTAL:");
    lcd.setCursor(7, 1);
    lcd.print(total);
  }

}
