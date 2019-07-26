#include <Servo.h>
Servo myservo;
int pinpot = A0;
int val;
int ledRED = 4;
int ledGREEN = 12;
int Readvalue;


void setup()
{
myservo.attach(8);
}


void loop() {
  
val = analogRead(pinpot);  
val = map(val, 0, 1023, 0, 180); 
myservo.write(val); 

   if(Readvalue<=525) {
     ledRED
    else(Readvalue>=525) {
       ledGREEN off;
    }
   }
         
      
}


