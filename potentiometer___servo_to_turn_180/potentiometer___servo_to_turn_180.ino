#include <Servo.h>
Servo myservo;
int pinpot = A0;
int val;


void setup()
{
myservo.attach(8);
}


void loop()
{
val = analogRead(pinpot);  
         
         
val = map(val, 0, 1023, 0, 180); 
         
         
myservo.write(val);    
         
delay(15);      
}


