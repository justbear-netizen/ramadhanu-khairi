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
  lcd.clear();
}


void loop() {
  if (digitalRead(i1)==LOW){
    lcd.setCursor(0,0);
    lcd.print("Tombol 1 ditekan ");
  }
  else if (digitalRead(i2)==LOW){
    lcd.setCursor(0,1);
    lcd.print("Tombol 2 ditekan");
  }

}
