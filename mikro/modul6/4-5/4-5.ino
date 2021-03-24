#include <LiquidCrystal_SR_LCD3.h> 
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 4; 
const int PIN_LCD_CLOCK = 3;
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA,PIN_LCD_CLOCK, PIN_LCD_STROBE);
int i1=A0;
int i2=A4;
int i3=A5;

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("hello, world!");
  pinMode(i1,INPUT);
  pinMode(i2,INPUT);
  pinMode(i3,INPUT);
  delay(1000);
}


void loop() {
   if (digitalRead(i1)==LOW){
      lcd.scrollDisplayLeft();
      delay(150);
  }
  else if (digitalRead(i2)==LOW){
        lcd.scrollDisplayRight();
        delay(150);
  }
  else {
   for (int positionCounter = 0;
       positionCounter < 13;
       positionCounter++)
      {
      lcd.scrollDisplayLeft();
      delay(150);
       }
 for (int positionCounter = 0;
        positionCounter < 29;
        positionCounter++)
        {
        lcd.scrollDisplayRight();
        delay(150);
        }
 for (int positionCounter = 0;
        positionCounter < 16;
        positionCounter++)
        {
        lcd.scrollDisplayLeft();
        delay(150);
        }
  }
}
