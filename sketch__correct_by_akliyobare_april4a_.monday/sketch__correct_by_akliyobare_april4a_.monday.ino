;;int LEDRED=8;
int LEDGREEN=13;
int blinkRED;
int blinkGREEN;
int redon;
String message1="This is the LEDRED Blink # ";
String message2="This is the LEDGREEN Blink # ";

void setup() {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  Serial.println("This is my First program");
  Serial.println(" ");

  Serial.print("How many blinks for LEDRED?");
  while(Serial.available()==0){};
  blinkRED=Serial.parseInt();
  Serial.println(" ");

  Serial.print("How many blinks for LEDGREEN?");
  while(Serial.available()==0){};
  blinkGREEN=Serial.parseInt();
  Serial.println(" ");

  Serial.print("How long should the LEDRED be on?");
  while(Serial.available()==0){};
  redon=Serial.parseInt();
  Serial.println(" ");
}
 
  // put your setup code here, to run once:
  
void loop() {

  for(int j=1;j<=blinkRED; j=j+1){

  Serial.print(message1);
  Serial.println(j);
 
    digitalWrite(LEDRED,HIGH);
    delay(redon);
    digitalWrite(LEDRED,LOW);
    delay(1000);
  }

    Serial.println(" ");

    
 
   for(int j=1;j<=blinkGREEN;j=j+1){
    
   Serial.print(message2);
   Serial.println(j);
      
   digitalWrite(LEDGREEN,HIGH);
   delay(1000);
   digitalWrite(LEDGREEN,LOW);
   delay(1000);
}

Serial.println(" ");

}
  // put your main code here, to run repeatedly:


