#include <LiquidCrystal.h>

LiquidCrystal lcd (7,8,9,10,11,12);
int pinpot=A0;
int pir=4;
int ReadValue;

void setup(){
  lcd.begin(16,2);
  lcd.clear();
  pinMode(pinpot,INPUT);
}

void loop(){
  lcd.setCursor(0,0);
//  lcd.print("SensorValue=");
  ReadValue=digitalRead(pir);
  if(ReadValue==HIGH);
  lcd.print("Motion detected");
}

else{
  (Readvalue==LOW);
  lcd.print("No motion detected");
//  lcd.print(analogRead(pinpot));
}

