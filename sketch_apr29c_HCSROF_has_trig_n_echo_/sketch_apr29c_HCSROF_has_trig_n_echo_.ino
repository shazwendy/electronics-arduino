int TRIG=4;
int echo=2;
float Time;
float distance;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG,OUTPUT);
  pinMode(echo,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
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
}
