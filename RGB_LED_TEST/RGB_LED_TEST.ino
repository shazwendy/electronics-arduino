int redPin=11;
int greenPin=6;
int bluePin=10;
int brightness=255;
String colorChoice;




void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}
  
  

void loop() {
  Serial.println("what color would you like the LED?(red,green,or blue)");
  while(Serial.available()==0){}
  colorChoice=Serial.readString();
//
//  if (colorChoice=="red"){
//    analogWrite(redPin,brightness);
//    analogWrite(bluePin,0);
//    analogWrite(greenPin,0);
//  }




  if (colorChoice=="yellow"){
    analogWrite(redPin,brightness);
    analogWrite(bluePin,0);
    analogWrite(greenPin,brightness);
  }
//  if(colorChoice=="blue") {
//    analogWrite(redPin,0);
//    analogWrite(greenPin,0);
//    analogWrite(bluePin,brightness);
//    
//  }



  if (colorChoice=="purple"){
    analogWrite(redPin,brightness);
    analogWrite(bluePin,brightness);
    analogWrite(greenPin,0);
  }
//  if(colorChoice=="green") {
//    analogWrite(redPin,0);
//    analogWrite(bluePin,0);
//    analogWrite(greenPin,brightness);
//    
//  }




  if (colorChoice=="cyan"){
    analogWrite(redPin,0);
    analogWrite(bluePin,brightness);
    analogWrite(greenPin,brightness);
  }
//  if (colorChoice!="red" && colorChoice!="green" &&colorChoice!="blue"){
//    Serial.println("That is not a valid color choice,please try again");
//    Serial.println("");
//  }
  

}

