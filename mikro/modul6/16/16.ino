#include <DotMatrix5x7.h>
#include <LiquidCrystal_SR_LCD3.h>

const int PIN_LCD_STROBE = A5; 
const int PIN_LCD_DATA = A4; 
const int PIN_LCD_CLOCK = A3;


LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA,PIN_LCD_CLOCK, PIN_LCD_STROBE);

int pot=A1;
int i1=A0;

void setup(void)
{ lcd.begin(16,2);
  Dot5x7.begin(2, 3, 4, 5, 6, 
  13, 12, 11, 10, 9, 8, 7);
  Dot5x7.setFramesPerSecond(100);
  pinMode(pot,INPUT);
  pinMode(i1,INPUT);
}

void loop(void)
{ int data =analogRead(pot)/100;

  if (digitalRead(i1)==LOW){
      if(data==1){
            char str[]="1";
            int i;
            Dot5x7.setUpsideDown(false);
            Dot5x7.clear();
            for (i=0; i< strlen(str); i++) {
              Dot5x7.show(str[i]);
              delay(1500);
              Dot5x7.clear();
              delay(150);
            }
            delay(3000);
            Dot5x7.setUpsideDown(true);
            Dot5x7.showString(str, 600, 100);
            delay(3000);
            } 
      else if(data==2){
            char str[]="2";
            int i;
            Dot5x7.setUpsideDown(false);
            Dot5x7.clear();
            for (i=0; i< strlen(str); i++) {
              Dot5x7.show(str[i]);
              delay(1500);
              Dot5x7.clear();
              delay(150);
            }
            delay(3000);
            Dot5x7.setUpsideDown(true);
            Dot5x7.showString(str, 600, 100);
            delay(3000);
            } 
      
      else if(data==3){
            char str[]="3";
            int i;
            Dot5x7.setUpsideDown(false);
            Dot5x7.clear();
            for (i=0; i< strlen(str); i++) {
              Dot5x7.show(str[i]);
              delay(1500);
              Dot5x7.clear();
              delay(150);
            }
            delay(3000);
            Dot5x7.setUpsideDown(true);
            Dot5x7.showString(str, 600, 100);
            delay(3000);
            } 
      
      else if(data==4){
            char str[]="4";
            int i;
            Dot5x7.setUpsideDown(false);
            Dot5x7.clear();
            for (i=0; i< strlen(str); i++) {
              Dot5x7.show(str[i]);
              delay(1500);
              Dot5x7.clear();
              delay(150);
            }
            delay(3000);
            Dot5x7.setUpsideDown(true);
            Dot5x7.showString(str, 600, 100);
            delay(3000);
            } 
      
      else if(data==5){
            char str[]="5";
            int i;
            Dot5x7.setUpsideDown(false);
            Dot5x7.clear();
            for (i=0; i< strlen(str); i++) {
              Dot5x7.show(str[i]);
              delay(1500);
              Dot5x7.clear();
              delay(150);
            }
            delay(3000);
            Dot5x7.setUpsideDown(true);
            Dot5x7.showString(str, 600, 100);
            delay(3000);
            } 
}
lcd.setCursor(0,0);
            lcd.print(data);
}
