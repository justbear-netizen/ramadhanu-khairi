int led=11; 
int led1=6; 
int led2=5; 
int tombol=2;
int tombol2=3;
int r=7;
void setup(){ 
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(tombol,INPUT);
  pinMode(tombol2,INPUT);
  pinMode(r,OUTPUT);
} 

void loop() {
  
  if (digitalRead(tombol)==LOW){
    digitalWrite(r,HIGH);
    delay(2000);
  }
  if (digitalRead(tombol2)==LOW){
    digitalWrite(r,HIGH);
    digitalWrite(led, HIGH);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(2000);
  }
  digitalWrite(r,LOW);
    digitalWrite(led, LOW);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
}
