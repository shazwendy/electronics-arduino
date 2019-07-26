int REDLED=8;
int pir=4;
int ReadValue;

void setup() {
  pinMode(REDLED,OUTPUT);
  pinMode(pir,INPUT);
  
}

void loop() {
  ReadValue=digitalRead(pir);
  if(ReadValue==HIGH)
  {digitalWrite(REDLED,HIGH);
  }
  
  else{
    digitalWrite(REDLED,LOW);
  }

  
  }


