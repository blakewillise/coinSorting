#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <EEPROM.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 

const int coin1 = A0;    
const int coin2 = A1;
const int coin5 = A2;
const int coin10 = A3;
const int btn = 2;
int spr1, spr2, spr5, spr10, btnState = 0;
int count1, count2, count5, count10, total = 0;


void(* resetFunc) (void) = 0;

void setup() {
  pinMode(coin1 , INPUT);
  pinMode(coin2 , INPUT);
  pinMode(coin5, INPUT);
  pinMode(coin10, INPUT);
  pinMode(btn, INPUT_PULLUP);
  lcd.noBacklight(); 
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
    
    spr1 = analogRead(coin1);
    spr2 = analogRead(coin2);
    spr5 = analogRead(coin5);
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
