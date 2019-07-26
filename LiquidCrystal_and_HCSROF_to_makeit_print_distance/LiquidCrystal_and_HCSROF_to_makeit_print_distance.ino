#include <LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
int TRIG=4;
int echo=2;
float Time;
float distance;


void setup(){
  lcd.begin(16,2);
  lcd.clear();
  pinMode(TRIG,OUTPUT);
  pinMode(echo,INPUT);
}

void loop(){
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  Time=pulseIn(echo,HIGH);
  distance=(Time*0.0343)/2;

  Serial.print(distance);
  Serial.println("cm");
  delay(500);
  lcd.setCursor(0,0);
  lcd.print(distance);
  lcd.print("cm");
  
  
}

