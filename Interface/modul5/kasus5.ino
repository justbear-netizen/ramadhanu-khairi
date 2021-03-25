#include <LiquidCrystal_SR_LCD3.h>
const int PIN_LCD_STROBE = 2;
const int PIN_LCD_DATA = 4;
const int PIN_LCD_CLOCK = 3;
int b1=8;
int b2=7;
int b3=6;
int b4=5;
int s=11;
int l=A0;
int p=A2;
int r=A5;
int nilai;
int nilai1;
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, PIN_LCD_CLOCK,PIN_LCD_STROBE);
void setup() {
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(b3,INPUT);
  pinMode(s,OUTPUT);
  pinMode(l,OUTPUT);
  pinMode(p,OUTPUT);
  pinMode(r,OUTPUT);
  lcd.begin(16,2);
  lcd.setCursor (0,0);
  Serial.begin(9600);
}

void loop() {
  nilai = analogRead(l);
  nilai1 = analogRead(p);
  if (digitalRead(b1)==LOW){
    Serial.println(nilai);
    lcd.setCursor (0,0);
    lcd.println(nilai);
  }
   else if (digitalRead(b2)==LOW){
    Serial.println(nilai1);
    lcd.setCursor (0,0);
    lcd.println(nilai1);
  }
   else if (digitalRead(b3)==LOW){
    if (nilai1>20){
    lcd.setCursor (0,0);
    lcd.println("Buzzer On");
    digitalWrite(s,HIGH);
    }
    else
    lcd.setCursor (0,0);
    lcd.println("Buzzer Of");
    digitalWrite(s,LOW);
  }
  else if (digitalRead(b4)==LOW){
    if (nilai>9){
      lcd.setCursor (0,0);
    lcd.println("Buzzer On");
    digitalWrite(s,HIGH);
    }
    else 
    lcd.setCursor (0,0);
    lcd.println("Buzzer Of");
    digitalWrite(s,LOW);
  }
  else {
  digitalWrite(s,LOW);
  lcd.clear();
  }

}
