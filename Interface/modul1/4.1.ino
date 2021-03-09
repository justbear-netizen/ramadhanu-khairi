int led=11;
int led1=6;
int led2=5;
int tombol=2;
void setup(){ pinMode(led,OUTPUT); pinMode (led1,OUTPUT); pinMode (led2,OUTPUT); pinMode(tombol,INPUT);
}
void loop(){
if(digitalRead(tombol)==LOW){ digitalWrite(led,HIGH);
} else{
digitalWrite(led,LOW);
}
if(digitalRead(tombol)==LOW){ digitalWrite(led1,HIGH);
} else{
digitalWrite(led1,LOW);
}
if(digitalRead(tombol)==LOW){ digitalWrite(led2,HIGH);
} else{
digitalWrite(led2,LOW);
}
}
