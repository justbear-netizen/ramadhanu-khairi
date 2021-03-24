
#include <DotMatrix5x7.h>

char str[]="Hello World!";

void setup(void)
{
 
  Dot5x7.begin(2, 3, 4, 5, 6, 
  13, 12, 11, 10, 9, 8, 7);
  Dot5x7.setFramesPerSecond(100);
}

void loop(void)
{
  int i;
  Dot5x7.setUpsideDown(false);
  Dot5x7.clear();
  for (i=0; i< strlen(str); i++) {
    Dot5x7.show(str[i]);
    delay(1500);
    Dot5x7.clear();
    delay(150);
  }
  delay(3000);
  Dot5x7.setUpsideDown(true);
  Dot5x7.showString(str, 600, 100);
  delay(3000);
}
