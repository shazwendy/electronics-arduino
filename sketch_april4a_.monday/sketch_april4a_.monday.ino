int LEDRED=3;
int LEDGREEN=9;
int blinkRED=5;
int blinkGREEN=5;
String message1="This is the LEDRED Blink # ";
String mesage2="This is the LEDGREEN Blink # ";

void setup() {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  Serial.println("This is my First program");
  Serial.print(" ");
}
 
  // put your setup code here, to run once:
  
void loop() {

  for(int j=1;j<=blinkRED; j=j+1){

  Serial.print("message1");
  Serial.println("j");
 
    digitalWrite(LEDRED,HIGH);
    delay(1000);
    digitalWrite(LEDRED,LOW);
    delay(1000);
  }

    Serial.println(" ");



   for(int j=1;j<=blinkGREEN; j=j+1){
    Serial.print("message2");
    Serial.println("j");
      
   digitalWrite(LEDGREEN,HIGH);
   delay(1000);
   digitalWrite(LEDGREEN,LOW);
   delay(1000);
}

Serial.println(" ");

}
  // put your main code here, to run repeatedly:


