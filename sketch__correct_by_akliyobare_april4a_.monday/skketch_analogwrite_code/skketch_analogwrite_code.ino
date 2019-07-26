int LedRED=10;

void setup() {
  pinMode(LedRED,OUTPUT);
 
  // put your setup code here, to run once:

}

void loop() {
  analogWrite(LedRED,40);
  delay(1000);
  analogWrite(LedRED,0);
  delay(1000);
  // put your main code here, to run repeatedly:

}
