#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4,
3, 2);
int i1=8;
int i2=9;
void setup()
{
lcd.begin(16, 2);
lcd.print("hello, world!");
pinMode(i1,INPUT);
pinMode(i2,INPUT);
delay(1000);
}
void loop()
{
 if (digitalRead(i1)==LOW){
 for (int positionCounter = 0;
 positionCounter < 13;
 positionCounter++);
 {
lcd.scrollDisplayLeft();
delay(150);
 }
 }
 if (digitalRead(i2)==LOW){
 for (int positionCounter = 0;
positionCounter < 29;
positionCounter++);
{
lcd.scrollDisplayRight();
delay(150);
}
}
if (digitalRead(i2)==HIGH && digitalRead(i1)==HIGH)
{
  delay(200);
}
}
