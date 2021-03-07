int led=11;
int led1=6;
int led2=5; 
int i; 
void setup(){ 
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
} 
void loop(){ 
  for (i=0; i<=255; i+=5){ analogWrite(led,i); delay(500);
}
for (i=255; i>=0; i-=5){ analogWrite(led,i); delay(500);
}

  for (i=0; i<=255; i+=5){ analogWrite(led1,i); delay(500);
}
for (i=255; i>=0; i-=5){ analogWrite(led1,i); delay(500);
}

  for (i=0; i<=255; i+=5){ analogWrite(led2,i); delay(500);
}
for (i=255; i>=0; i-=5){ analogWrite(led2,i); delay(500);
}
}
