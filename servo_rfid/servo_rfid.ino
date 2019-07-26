#include <SPI.h>
#include <MFRC522.h>

#include <Stepper.h>
//int ledred = 5;
//int ledblue = 6;
// 

float numturns;
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
const int stepsPerRevolution = 2048;
Stepper myStepper(stepsPerRevolution, 2,4,3,5);
void setup() 
{
  Serial.begin(9600);
   SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
//  pinMode(ledred,OUTPUT);
//  pinMode(ledblue,OUTPUT);
   myStepper.setSpeed(20);
   
  Serial.println("How many turns for the motor?");
  while (Serial.available () == 0 ){};
  numturns = Serial.parseInt ();
  Serial.println(" ");

  Serial.println("Approximate your card to the reader...");
  Serial.println();

}
void loop() 
{
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "A4 F5 2F 5B") //change here the UID of the card/cards that you want to give access
  {
 Serial.println("clockwise");
  myStepper.step(stepsPerRevolution * numturns);
  delay(500);
  }
 
 
  else{
    Serial.println("waiting");
    
    }
} 
