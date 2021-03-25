int buzz = 11;
int senRead = 0;
int pd=A1; 
int limit = 850;
void setup(){      
pinMode(pd,OUTPUT); //photodioda sebagai output     
pinMode(buzz,OUTPUT); //buzzer atau speaker sebagai output
digitalWrite(buzz,LOW); //apabila buzzer low
Serial.begin(9600);            
 }     
void loop(){
int val=analogRead(senRead); //nilai=nilai di LDR
Serial.println(val); //menampilkan nilai
if(val <= limit)  //apabila nilai <= limit
  {    
digitalWrite(buzz,HIGH);  //buzzer atau speaker menyala
delay(20);      
}      
else if(val > limit) //apabila nilai > limit
  {    
   digitalWrite(buzz,LOW); //buzzer atau speaker mati
delay(20);    
  }    
 }
