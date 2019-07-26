#include "functions.h"
void Blink(){
  digitalWrite(Red,HIGH);
  delay(1000);
  digitalWrite(Red,LOW);
  delay(500);

  digitalWrite(Blue,HIGH);
  delay(1000);
  digitalWrite(Blue,LOW);
  delay(500);

  digitalWrite(Green,HIGH);
  delay(1000);
  digitalWrite(Green,LOW);
  delay(500);
}

