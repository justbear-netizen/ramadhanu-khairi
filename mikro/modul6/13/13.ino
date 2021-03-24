#include <sevenSegmentDisplay.h>

sevenSegmentDisplay ssd(COMMON_CATHODE, 11, 10, 9, 8, 7, 6, 5, A0);
void setup() {

  Serial.begin(9600);
}

void loop() {

  ssd.set('A');
  delay(1000);
  ssd.set('b');
  delay(1000);
  ssd.set('c');
  delay(1000);
  ssd.set('d');
  delay(1000);
  ssd.set('E');
  delay(1000);
  ssd.set('F');
  delay(1000);
  ssd.set('g');
  delay(1000);
  ssd.set('H');
  delay(1000);
  ssd.set('I');
  delay(1000);
  ssd.set('J');
  delay(1000);
  
}
