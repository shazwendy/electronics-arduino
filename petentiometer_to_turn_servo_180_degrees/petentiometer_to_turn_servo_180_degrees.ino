#include <Servo.h>
Servo servo;
int pinpot = A0;
int servoPin = 8;

void setup() {
  // put your setup code here, to run once:

//myservo.attach(8);
servo.attach(servoPin);
}


void loop()
{
servoPin = analogRead(pinpot);  
         
         
servoPin = map(servoPin, 0, 1023, 0, 179);     
           


}
