#include <BlynkSimpleStream.h>
// Pin Assignments
int redPin=13,yellowPin=12,greenPin=11,bluePin=10;
char auth[] = "VKJBT7O-CW--nHRSaQHNIrETekkaLXDZ";
void setup()
{
//Atur pin sebagai output
pinMode(redPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);

// Blynk berkomunikasi melalui komunikasi serial
Serial.begin(9600);
Blynk.begin(auth, Serial);
}
void loop()
{
//mengaktifkan fungsi Blynk
Blynk.run();
}
