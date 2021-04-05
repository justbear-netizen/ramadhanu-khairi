#include<EEPROM.h>
#include <LiquidCrystal_SR_LCD3.h>
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 4; 
const int PIN_LCD_CLOCK = 3; 
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, PIN_LCD_CLOCK, PIN_LCD_STROBE); 

int calibrationTime = 30;
long unsigned int lowIn;
long unsigned int pause = 5000;
boolean lockLow = true;
boolean takeLowTime;
int PIRValue = 0;
int pirPin = 12;
int led= 8;

int tekan=0;
int tombol=7;
int buzzer=A0;

void setup() {
  
Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(pirPin, INPUT);
  pinMode(tombol,INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  if(tombol==LOW){
    tekan=tekan+1;
    }

}

void loop() {
  
  Serial.println(tekan);
  if(digitalRead(tombol)==LOW){
    tekan=tekan+1;
    }
   delay(500);
      if(tekan==1){
      Serial.println("PIR AKTIF");
      lcd.setCursor (0, 0);
      lcd.println("PIR AKTIF");
    }
    else if(tekan==2){
       if(digitalRead(pirPin) == HIGH)
     {       
         if(lockLow)
         {    
             PIRValue = 1;
             lockLow = false;
             Serial.println("Motion detected.");
             lcd.setCursor (0, 0);
             lcd.println("Motion detected.");
             digitalWrite(buzzer,HIGH);
             
             delay(50);
         }         
         takeLowTime = true;
       }

       else
       {       
           
           
               PIRValue = 0; 
               lockLow = true;
               lcd.setCursor (0, 0);
                lcd.println("Motion ended.");                      
               Serial.println("Motion ended.");
               digitalWrite(buzzer,LOW);
               delay(50);
       }
    }
    else if(tekan==3){
       if(digitalRead(pirPin) == HIGH)
     {       
         if(lockLow)
         {    
             PIRValue = 1;
             lockLow = false;
             Serial.println("Motion detected.");
             lcd.setCursor (0, 0);
             lcd.println("Motion detected.");
             digitalWrite(led,HIGH);
             
             delay(50);
         }         
         takeLowTime = true;
       }

       else
       {       
           
               PIRValue = 0; 
               lockLow = true;
               lcd.setCursor (0, 0);
                lcd.println("Motion ended.");                        
               Serial.println("Motion ended.");
               digitalWrite(led,LOW);
               delay(50);
           
       }
    }
    
    else if(tekan==4){
      tekan=0;
    }
}
