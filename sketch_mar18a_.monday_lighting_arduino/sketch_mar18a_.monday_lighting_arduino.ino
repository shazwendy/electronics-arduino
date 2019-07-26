int LEDRED=8;
int LEDGREEN=12;


void setup() {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  Serial.println("This is my 1st program");
  Serial.println(" ");}
  // put your setup code here, to run once:
void loop() {


  Serial.print("Blink #1 is RED");
  Serial.println(" ");
 
    digitalWrite(LEDRED,HIGH);
    delay(1000);
    digitalWrite(LEDRED,LOW);
    delay(1000);

    Serial.print("Blink #2 is GREEN");
    Serial.println(" ");
     
    digitalWrite(LEDGREEN,HIGH);
    delay(1000);
    digitalWrite(LEDGREEN,LOW);
    delay(1000);
    digitalWrite(LEDGREEN,HIGH);
    delay(1000);
    digitalWrite(LEDGREEN,LOW);
    delay(1000);

 Serial.print("Blink #3 is RED");
 Serial.println(" ");
  digitalWrite(LEDRED,HIGH);
  digitalWrite(LEDRED,LOW);
  delay(1000);
  }
  // put your main code here, to run repeatedly:


