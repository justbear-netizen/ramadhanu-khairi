#include <LiquidCrystal_SR_LCD3.h>
#include <sevenSegmentDisplay.h> 
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 4; 
const int PIN_LCD_CLOCK = 3;

sevenSegmentDisplay ssd(COMMON_CATHODE, 11, 10, 9, 8, 7, 6, 5, A0);
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA,PIN_LCD_CLOCK, PIN_LCD_STROBE);
int i1=A0;
int i2=A4;
int i3=A5;
int pot=A1;

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("hello, world!");
  pinMode(i1,INPUT);
  pinMode(i2,INPUT);
  pinMode(i3,INPUT);
  pinMode(pot,INPUT);
  delay(1000);
  lcd.clear();
}


void loop() {
  int data =analogRead(pot)/100;
  if (digitalRead(i1)==LOW){
    lcd.setCursor(0,0);
    lcd.print("hitungan maju");
    for (int i=0; i<10;i++){
    ssd.set(i);
    delay(500);
  }
    
  }
  else if (digitalRead(i2)==LOW){
    lcd.setCursor(0,0);
    lcd.print("hitungan mundur");
    for (int i=9; i>0;i--){
    ssd.set(i);
    delay(500);
  }
  }
  else if (digitalRead(i3)==LOW){
   lcd.setCursor(0,0);
   lcd.print(data);
   ssd.set(data);
  }
  else{
    lcd.clear();
  }

}
