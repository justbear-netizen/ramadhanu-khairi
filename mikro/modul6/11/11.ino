#include <sevenSegmentDisplay.h>
int pot=A1;
sevenSegmentDisplay ssd(COMMON_CATHODE, 11, 10, 9, 8, 7, 6, 5, A0);

void setup() {
  pinMode(pot,INPUT);
  Serial.begin(9600);
}

void loop() {
  int data =analogRead(pot)/100;
  Serial.println(data);
  ssd.set(data);
}
