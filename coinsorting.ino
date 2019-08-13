#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <EEPROM.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 

const int coin1  = A0;   
const int coin2 = A1;
const int coin5  = A2;
const int coin10 = A3;
const int btn = 2;
int spr1, spr2, spr5, spr10, btnState = 0;
int count1, count2, count5, count10, total, totalcurr = 0;


void setup() {
		Serial.begin(9600);
		pinMode(coin1 , INPUT);
		pinMode(coin2 , INPUT);
		pinMode(coin5, INPUT);
		pinMode(coin10, INPUT);
		pinMode(btn, INPUT_PULLUP);
		lcd.noBacklight(); 
		lcd.begin(16, 2);
		lcd.setCursor(0, 0);
		lcd.print("Welcome");
		delay(3000);
}

void loop() {

		btnState = digitalRead(btn);

		if (btnState == LOW) {
				lcd.clear(); 
				delay(500);
				lcd.setCursor(3, 0);
				lcd.print("THANK YOU!");
				delay(1500);


				lcd.clear(); //NEXT PAGE
				delay(500);

				displayCoinAmount();

				lcd.clear();  //NEXT PAGE
				delay(500);

				total += totalcurr;
				EEPROM.write(5, total);
				lcd.setCursor(0,0);
				lcd.print("Now we have");
				lcd.setCursor(0,1);
				lcd.print("HKD:");
				lcd.setCursor(4,1);
				lcd.print(EEPROM.read(5));
				delay(1500);

				count1 = 0;
				count2 = 0;
				count5 = 0;
				count10 = 0;
				totalcurr = 0;
				btnState = HIGH;

				lcd.clear();
				delay(1000);
				lcd.setCursor(0, 0);
				lcd.print("Welcome");
				delay(3000);

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
					count2 += 1;
					delay(100);
			}
			if (spr5 <= 10) {
					count5 += 1;
					delay(100);
			}
			if (spr10 <= 10) {
					count10 += 1;
					delay(100);
			}

				totalcurr = count1 + 2 * count2 + 5 * count5 + 10 * count10;

				lcd.setCursor(0, 1);
				lcd.print("TOTAL:");
				lcd.setCursor(7, 1);
				lcd.print(totalcurr);
		}
}

void displayCoinAmount(){
			lcd.setCursor(0, 0);
			lcd.print("$1 x ");
			lcd.setCursor(5, 0);
			lcd.print(count1);

			lcd.setCursor(0, 1);
			lcd.print("$2 x ");
			lcd.setCursor(5, 1);
			lcd.print(count2);
			delay(2000);


			lcd.clear();  //NEXT PAGE
			delay(500);

			lcd.setCursor(0, 0);
			lcd.print("$5 x ");
			lcd.setCursor(5, 0);
			lcd.print(count5);

			lcd.setCursor(0, 1);
			lcd.print("$10x ");
			lcd.setCursor(5, 1);
			lcd.print(count10);
			delay(2000);
}
