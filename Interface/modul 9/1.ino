int ProxSensor = 12;  
int Buzzer = A0;  
int inputVal = 0; 
 void setup() {     
  pinMode(Buzzer, OUTPUT);     
  pinMode(ProxSensor, INPUT);     
  Serial.begin(9600); 
}  
void loop() {         
  if (digitalRead(ProxSensor) == LOW) {         
    Serial.println("Terdeteksi Halangan!");         
    digitalWrite(Buzzer, HIGH);         
    inputVal = analogRead(ProxSensor);         
    Serial.println(inputVal);         
    delay(1000); 
      }         
      if (digitalRead(ProxSensor) == HIGH) {         
        Serial.println("Clear!");         
        digitalWrite(Buzzer, LOW);         
        inputVal = analogRead(ProxSensor);         
        Serial.println(inputVal);         
        delay(1000); 
    }        
 }
