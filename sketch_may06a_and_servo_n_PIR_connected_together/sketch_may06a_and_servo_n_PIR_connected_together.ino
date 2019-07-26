#include <Servo.h>
Servo myservo;
int ReadValue;
int PIR=13;


void setup() {
  myservo.attach(4);
  pinMode(PIR,INPUT);
  
}

void loop(){
  ReadValue=digitalRead(PIR);
  if (ReadValue ==HIGH) {
    myservo.write(90);
    delay(1000);
  }
else{
  myservo.write(0);
  delay(1000);}
}


