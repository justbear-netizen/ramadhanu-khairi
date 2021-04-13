int limit = 850;
int led=13;
int buzz = 11;
int senRead = A0;
int pd=A1;
void setup(){      
pinMode(pd,OUTPUT); //photodioda sebagai output     
pinMode(buzz,OUTPUT); //buzzer atau speaker sebagai output
pinMode(led,OUTPUT);
digitalWrite(buzz,LOW); //apabila buzzer low
Serial.begin(9600);            
 }     
void loop(){
int val=analogRead(senRead); //nilai=nilai di LDR
Serial.println(val); //menampilkan nilai
if(val > limit)  //apabila nilai <= limit
  {    
digitalWrite(buzz,HIGH);
digitalWrite(led,HIGH);
delay (500);
digitalWrite(buzz,LOW);
digitalWrite(led,LOW);
delay(500);
digitalWrite(buzz,HIGH);
digitalWrite(led,HIGH);
delay (500);
digitalWrite(buzz,LOW);
digitalWrite(led,LOW);
delay(500);
digitalWrite(buzz,HIGH);
digitalWrite(led,HIGH);
delay (500);
digitalWrite(buzz,LOW);
digitalWrite(led,LOW);
delay(500);           
}      
else if(val < limit) //apabila nilai > limit
  {    
   digitalWrite(buzz,LOW); //buzzer atau speaker mati
  digitalWrite(led,LOW);
  delay(20);    
  }    
 }
