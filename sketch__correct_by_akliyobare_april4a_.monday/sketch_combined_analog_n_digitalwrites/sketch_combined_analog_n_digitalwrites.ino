int pinpot=A0;
int LED=10;
int Brightness;
int Readvalue;
String message1="Pinpot value=  ";
String message2="Brightness=  ";

void setup() {
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(LED,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  
  Readvalue=analogRead(pinpot); 
  Brightness=(255./1023.)*Readvalue;
  analogWrite(LED,Brightness);
  delay(1000);
  analogWrite(LED,0);
  delay(1000);
  
  Serial.print("pinpot value= ");
  Serial.print(Readvalue);
  Serial.print("Brightness= ");
  Serial.println(Brightness);
  // put your main code here, to run repeatedly:

}
