int lightPin = A0;    int ledPin = 13;       
  
void setup()  
{  
    Serial.begin(9600); //memulai sistem
    pinMode( ledPin, OUTPUT );  //led sebagai output
}   
void loop()  
{  
Serial.println(analogRead(lightPin)); //membaca nilai di LDR     
analogWrite(ledPin, analogRead(lightPin)/4); //membaca nilai di LDR dan dikeluarkan di LED                           
delay(10);   
}  
