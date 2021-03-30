#include<EEPROM.h>
#include <LiquidCrystal_SR_LCD3.h>
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 4; 
const int PIN_LCD_CLOCK = 3; 
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, PIN_LCD_CLOCK, PIN_LCD_STROBE); 

byte data;
int tekan=0;
int tombol=7;
int Lm=A0;
int hasil=0;
int led= A5;
int buzzer=10;
int led1=5;
void setup(){
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(tombol,INPUT);
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(buzzer, OUTPUT);
  if(tombol==LOW){
    tekan=tekan+1;
    }
}

void loop(){
  data= analogRead(Lm)/4;
  
    if(digitalRead(tombol)==LOW){
    tekan=tekan+1;
    }
    delay(1000);
    if(tekan==1){
      EEPROM.write(0,data);
      lcd.setCursor (0, 0);
      lcd.println("suhu terekam");
      Serial.println("suhu terekam");
    }
    else if(tekan==2){
      EEPROM.read(0);
      hasil=data;
      lcd.setCursor (0, 1);
      lcd.println(EEPROM.read(0));
    }
    else if(tekan==3){
      EEPROM.write(0,0);
      digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      lcd.clear();
    }
    else if(tekan==4){
      for (int i=0; i<=255; i+=5){      
    analogWrite(led1,i);     
    delay(100);   
      }  
    }
    else if(tekan==5){
      tekan=0;
    }
  
  
}
