int led=11;
int led1=6;
int led2=5;
int tombol=2;
int i;

void setup(){ pinMode(led,OUTPUT); pinMode (led1,OUTPUT); pinMode (led2,OUTPUT); pinMode(tombol,INPUT);
}
void loop(){
if(digitalRead(tombol)==LOW){ 
for (i=0; i<=255; i+=5){ analogWrite(led,i); delay(100);
}
for (i=255; i>=0; i-=5){ analogWrite(led,i); delay(100);
};
} else{
digitalWrite(led,LOW);
}
if(digitalRead(tombol)==LOW){ for (i=0; i<=255; i+=5){ analogWrite(led1,i); delay(100);
}
for (i=255; i>=0; i-=5){ analogWrite(led1,i); delay(100);
}} else{
digitalWrite(led1,LOW);
}
if(digitalRead(tombol)==LOW){ 
  for (i=0;i<=255; i+=5){ analogWrite(led2,i); delay(100);
}
for (i=255; i>=0; i-=5){ analogWrite(led2,i); delay(100);
}
}
else{
digitalWrite(led2,LOW);
}
}
