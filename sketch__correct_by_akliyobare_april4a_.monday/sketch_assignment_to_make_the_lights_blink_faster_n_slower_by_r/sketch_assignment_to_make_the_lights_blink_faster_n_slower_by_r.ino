
int REDLED=8;
int Readvalue;
int delayREDLED;
int pinpot;
int Writevalue;


void setup() {
  
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(REDLED,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
 
  Readvalue=analogRead(pinpot);
  delayREDLED=(900./1023.)*Readvalue; 
  Writevalue=(255./1023.)*Readvalue;
  analogWrite(REDLED,255);
  delay(delayREDLED);
  analogWrite(REDLED,0);
  

  
  // put your main code here, to run repeatedly:void setup() {
  // put your setup code here, to run once:

}


