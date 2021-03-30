float tempC;
int reading;
int tempPin = A0;
void setup()
{
analogReference(INTERNAL);
}
void loop() {
reading = analogRead(tempPin);
tempC = reading /4;
}
