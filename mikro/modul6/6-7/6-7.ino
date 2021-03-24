#include <LiquidCrystal_SR_LCD3.h> 
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 4; 
const int PIN_LCD_CLOCK = 3;
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA,PIN_LCD_CLOCK, PIN_LCD_STROBE);
int i1=A0;
int i2=A4;
int i3=A5;
char data=0;
void setup(){
pinMode(i1,INPUT);
lcd.begin(16, 2);
Serial.begin(9600);
lcd.setCursor(0,0);
lcd.print("Hello");
delay(1000);
lcd.clear();
}
void loop(){
     if (Serial.available() > 0) {
      data = Serial.read();
      Serial.print(data);
      lcd.print(data);
    }
 if(digitalRead(i1)==LOW){
  for (int positionCounter = 0; positionCounter < 15; positionCounter++){
   lcd.scrollDisplayLeft();
   delay(150); 
  }
 }
}
