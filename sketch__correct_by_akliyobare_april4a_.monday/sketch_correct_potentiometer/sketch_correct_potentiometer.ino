
int pinpot=A0;
int Readvalue;


void setup() {
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  delay(1000);
}



void loop() {
  Readvalue=analogRead(pinpot);
  Serial.println(Readvalue);
  delay(1000);
}

