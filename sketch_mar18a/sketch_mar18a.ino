int LEDRED=8;
int LEDGREEN=12;
int BLINKRED=10;
int BLINKGREEN=5;
String message="Sharon";
void setup() {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  Serial.println("HELLOW");
  Serial.println("");
  // put your setup code here, to run once:

}

void loop() {
  for (int j=1; j<=BLINKRED; j=j+1){
  Serial.println(message);
  Serial.print(" ");
  Serial.print(j);
  Serial.print(" ");
    digitalWrite(LEDRED,HIGH);
    delay(1000);
    digitalWrite(LEDRED,LOW);
    delay(1000);
  }
  for (int j=1; j<=BLINKGREEN; j=j+1){
    digitalWrite(LEDGREEN,HIGH);
    delay(1000);
    digitalWrite(LEDGREEN,LOW);
    delay(1000);
  }
  // put your main code here, to run repeatedly:

}
