#include <sevenSegmentDisplay.h>

sevenSegmentDisplay ssd(COMMON_CATHODE, 11, 10, 9, 8, 7, 6, 5, A0);

void setup() {

  Serial.begin(9600);
}

void loop() {
  for (int i=0; i<10;i++){
    ssd.set(i);
    delay(1000);
  }
  
}
