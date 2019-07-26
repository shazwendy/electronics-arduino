#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);


void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  }


void loop () {
  while(Serial.available()>0){
  lcd.write(Serial.read());
    }
    delay(1000);
    lcd.clear();
  } 
