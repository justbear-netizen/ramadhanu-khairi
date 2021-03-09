int led=11;
int led1=6;
int led2=5;
int tombol=2;
int pot=A0;
int data;

void setup(){ 
pinMode(led,OUTPUT); 
pinMode (led1,OUTPUT); 
pinMode (led2,OUTPUT); 
pinMode(tombol,INPUT);
pinMode(pot,INPUT);
}
void loop(){
if(digitalRead(tombol)==LOW){
  data=analogRead(pot);
data=data/4;
  if (data > 0) {              
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
  } else {                     
    digitalWrite(led, LOW);   
  } 
  if (data > 55) {             
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
  } else {                     
    digitalWrite(led1, LOW);   
  } 
  if (data > 220) {            
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
  } else {                     
    digitalWrite(led2, LOW);   
  }
}
else{
digitalWrite(led2,LOW);
digitalWrite(led1,LOW);
digitalWrite(led,LOW);
}

}
