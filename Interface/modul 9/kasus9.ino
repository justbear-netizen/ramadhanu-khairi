#include<EEPROM.h>
#include <LiquidCrystal_SR_LCD3.h>
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 4; 
const int PIN_LCD_CLOCK = 3; 
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, PIN_LCD_CLOCK, PIN_LCD_STROBE); 

 
int led= 8;
int push=0;
int IRpin =A1;  
int Buzzer = A0;  
int inputVal = 0;
int tombol=7;

void setup() {
  
  pinMode(Buzzer, OUTPUT); 
  pinMode(tombol,INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  if(tombol==LOW){
    push=push+1;
    }

}

void loop() {
  
  Serial.println(push);
  if(digitalRead(tombol)==LOW){
    push=push+1;
    lcd.clear();
    }
   delay(500);
      if(push==1){
        float volts = analogRead(IRpin)*0.0048828125;   
        float distance = 65*pow(volts, -1.10); 
        Serial.println(distance);
        Serial.println("cm");
        lcd.setCursor(0,0);  
        lcd.print(distance);     
        lcd.print(" cm");
        delay(1000);

           
    }
    else if(push==2){
       float volts = analogRead(IRpin)*0.0048828125;   
        float distance = 65*pow(volts, -1.10); 
            if (distance > 24){
              digitalWrite(Buzzer,HIGH);
              Serial.println(distance);
        Serial.println("cm");
              lcd.setCursor(0,0);  
              lcd.print(distance);   
              lcd.print("cm");
              
            }
            else{
              digitalWrite(Buzzer,LOW);
              lcd.clear();
            }
         
    }
    else if(push==3){
        float volts = analogRead(IRpin)*0.0048828125;   
        float distance = 65*pow(volts, -1.10); 
            if (distance > 24){
              digitalWrite(led,HIGH);
              Serial.println(distance );
        Serial.println("cm");
              lcd.setCursor(0,0);  
              lcd.print(distance);   
              lcd.print("cm");
              
            }
            else{
              digitalWrite(led,LOW);
              lcd.clear();
            }
    }
            else if(push==4){
        lcd.clear();
        
         push=0;
       }
}
