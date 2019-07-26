#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
  lcd.begin(16,2);  //defining 16 columns and 2 rows of lcd display
  lcd.backlight();  //to power ON the back light
  //lcd.backlight();  //to power OFF the backlight
}

void loop() {

  lcd.setCursor(0,0);  //defining position to write from first row,first column
  lcd.print( "Tech Maker ");  //you can write 16 Characters per line
  delay(1000);  //delay used to give a dynamic effect
  lcd.setCursor(0,1);  //defining position to write from second row,first column
  lcd.print("Like | Share");
  delay(8000);

  lcd.clear();  //clear the screen
  lcd.setCursor(0,0);
  lcd.print(" SUBSCRIBE ");
  lcd.setCursor(0,1);
  lcd.print(" TECH MAKER ");
  delay(8000);
  }
