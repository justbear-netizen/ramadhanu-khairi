int led=11; int pot=A0; int data; int led1=6; int led2=5; int i;
void setup(){ 
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(pot,INPUT);
} 
void loop(){ 
  data=analogRead(pot); data=data/4; 
  analogWrite(led,data); analogWrite(led1,data); analogWrite(led2,data);
 if (data > 0) {              //jika potensiomter tegangannya lebih dari 0 maka
    digitalWrite(led, HIGH);  //led 1 menyala
  } else {                     //jika potensio kurang dari 0 maka
    digitalWrite(led, LOW);   //led 1 mati
  }

  if (data > 55) {             //jika potensiomter tegangannya lebih dari 55 maka
    digitalWrite(led1, HIGH);  //led 2 menyala
  } else {                     //jika potensio kurang dari 55 maka
    digitalWrite(led1, LOW);   //led 2 mati
  }

  if (data > 225) {            //jika potensiomter tegangannya lebih dari 110 maka
    digitalWrite(led2, HIGH);  //led 3 menyala
  } else {                     //jika potensio kurang dari 110 maka
    digitalWrite(led2, LOW);   //led 3 mati dst.
  }

}
