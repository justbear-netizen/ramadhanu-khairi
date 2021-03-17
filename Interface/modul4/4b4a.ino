#include<EEPROM.h>
#include <LiquidCrystal_SR_LCD3.h>
const int PIN_LCD_STROBE = A5; 
const int PIN_LCD_DATA = A4; 
const int PIN_LCD_CLOCK = A3; 
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, PIN_LCD_CLOCK, PIN_LCD_STROBE); 

byte data;
int tekan=0;
int tombol=A0;
int buzzer=A2;
int potensio=A1;
int hasil=0;
void setup(){
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(buzzer,OUTPUT);
  pinMode(tombol,INPUT);
    if(tombol==LOW){
    tekan=tekan+1;
    }
}

void loop(){

  int tombol = digitalRead(A0);
  data= analogRead(potensio) /4;

    if(tombol==LOW){
    tekan=tekan+1;
    }
    if(tekan==1){
      EEPROM.write(0,data);
      lcd.setCursor (0, 0);
      lcd.println(data);
    }
    else if(tekan==2){
      EEPROM.read(0);
      hasil=data;
      lcd.setCursor (0, 0);
      lcd.println(EEPROM.read(0));
    }
    else if(tekan==3){
      EEPROM.write(0,0);
      digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      hasil=0;
    }
    else if(tekan==4){
      lcd.setCursor (0, 0);
      Serial.println("Data telah dihapus");
      tekan=0;
    }
    if(hasil==0){
      
    }
    else if (hasil >0){
     Serial.println(hasil);
    }
    delay(1000);
  
}
