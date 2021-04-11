const int pingPin = 12; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 11; // Echo Pin of Ultrasonic Sensor
#include <LiquidCrystal_SR_LCD3.h>
const int PIN_LCD_STROBE = 2; 
const int PIN_LCD_DATA = 4; 
const int PIN_LCD_CLOCK = 3; 
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, PIN_LCD_CLOCK, PIN_LCD_STROBE); 
int tekan=0;
int tombol=7;
int buzzer=A0;
int led= 8;
void setup()
{
  Serial.begin(9600); // Starting Serial Terminal

  lcd.begin(16,2);
  pinMode(tombol,INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  if(tombol==LOW){
    tekan=tekan+1;
    }

}

void loop()
{
long duration, inches, cm;
pinMode(pingPin, OUTPUT);
digitalWrite(pingPin, LOW);
delayMicroseconds(2);
digitalWrite(pingPin, HIGH);
delayMicroseconds(10);
digitalWrite(pingPin, LOW);

pinMode(echoPin, INPUT);
duration = pulseIn(echoPin, HIGH);
inches = microsecondsToInches(duration);
cm = microsecondsToCentimeters(duration);


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
       if(inches > 219)
     {        
         
            
             Serial.println("Motion detected.");
             lcd.setCursor (0, 0);
             lcd.println("Motion detected.");
             digitalWrite(buzzer,HIGH);
             digitalWrite(led,LOW);
             
             delay(50);
       }

       else if (inches < 219)
       {       
               lcd.setCursor (0, 0);
                lcd.println("Motion ended.");                      
               Serial.println("Motion ended.");
               digitalWrite(buzzer,LOW);
               digitalWrite(led,LOW);
               delay(50);
       }
    }
    else if(tekan==3){
       if(inches > 219)
     {        
         
            
             Serial.println("Motion detected.");
             lcd.setCursor (0, 0);
             lcd.println("Motion detected.");
             digitalWrite(led,HIGH);
             digitalWrite(buzzer,LOW);
             
             delay(50);
       }

       else if (inches < 219)
       {       
               lcd.setCursor (0, 0);
                lcd.println("Motion ended.");                      
               Serial.println("Motion ended.");
               digitalWrite(led,LOW);
               digitalWrite(buzzer,LOW);
               delay(50);
       }
    }
     else if(tekan==4){
      tekan=0;
      digitalWrite(led,LOW);
      digitalWrite(buzzer,LOW);
      lcd.clear();
    }
    
}

long microsecondsToInches(long microseconds)
{
return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
return microseconds / 29 / 2;
}
