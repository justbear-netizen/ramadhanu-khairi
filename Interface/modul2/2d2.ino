#include <LiquidCrystal_SR_LCD3.h> 
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 3; 
const int PIN_LCD_CLOCK = 4;
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA,PIN_LCD_CLOCK, PIN_LCD_STROBE);
int i1=7;
int i2=6;
int i3=5;

void setup()
{
lcd.begin(16,2);
lcd.print("hello, world!");
pinMode(i1,INPUT);
pinMode(i2,INPUT);
delay(1000);
}
void loop()
{
 if (digitalRead(i1)==LOW){  // jika tombol 1 di tekan text akan berjalan ke kiri
 for (int positionCounter = 0;
 positionCounter < 13;
 positionCounter++);
 {
lcd.scrollDisplayLeft();
delay(150);
 }
 }
 if (digitalRead(i2)==LOW){ // jika tombol di tekan text akan berjalan ke kanan
 for (int positionCounter = 0;
positionCounter < 29;
positionCounter++);
{
lcd.scrollDisplayRight();
delay(150);
}
}
if (digitalRead(i2)==HIGH && digitalRead(i1)==HIGH) // jika tombol tidak di tekan text akan diam
{
  delay(200);
}
}
