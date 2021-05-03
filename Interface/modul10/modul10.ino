
#include <Servo.h>
 
Servo myservo;
 
int pot = A0;
int var;
 
void setup(){
Serial.begin(9600);
myservo.attach(13);//penggunaan data pada pin 3 sebagai keluaran PWM
}
 
void loop(){
var = analogRead(pot); //pembacaan potensiometer dengan nilai 0-1023
var = map (var, 00, 1023, 00, 180); //mengubah nilai 0-1023 menjadi 0-180 derajat
myservo.write(var);
delay(10);
Serial.println(var);
}
