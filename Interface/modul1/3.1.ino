int led=11; int pot=A0; int data; int led1=6; int led2=5;
void setup(){ 
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(pot,INPUT);
} 
void loop(){ 
  data=analogRead(pot); data=data/4; 
  analogWrite(led,data); analogWrite(led1,data); analogWrite(led2,data);
}
