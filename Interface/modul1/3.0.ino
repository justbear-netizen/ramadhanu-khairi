int led=11; int pot=A0; int data; 
void setup(){ 
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
} 
void loop(){ 
  data=analogRead(pot); data=data/4; 
  analogWrite(led,data);
}
