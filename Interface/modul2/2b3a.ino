#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4,3, 2);
int dataterkirim;
void setup(){
    // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600);
  // initialize the serial communications:
}

void loop()
{
       dataterkirim = Serial.read();
   Serial.print("saya menerima data: ");
   lcd.print(Serial.println(dataterkirim, DEC));
}
