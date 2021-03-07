int led1=12; //Variabel untuk menyimpan nilai input pin button
int led2=11; //Variabel untuk menyimpan nilai input pin button
int led3=10; //Variabel untuk menyimpan nilai input pin button

void setup(){ //Sistem awal
pinMode(led1,OUTPUT); //Set pin untuk mode output
pinMode(led2,OUTPUT); //Set pin untuk mode output
pinMode(led3,OUTPUT); //Set pin untuk mode output

} void loop(){ //Sistem utama yang akan terus mengulang
digitalWrite(led1,HIGH); //untuk menyalakan led pada pin 12
digitalWrite(led2,LOW); 
digitalWrite(led3,LOW); 
delay(500); //waktu(milisecond)
digitalWrite(led1,LOW); //untuk mematikan led pada pin 12
digitalWrite(led2,HIGH); //untuk menyalakan led pada pin 11
digitalWrite(led3,LOW); 
delay(500);//waktu(milisecond)
digitalWrite(led1,LOW); //untuk mematikan led pada pin 12
digitalWrite(led2,LOW); //untuk mematikan led pada pin 11
digitalWrite(led3,HIGH); //untuk menyalakan led pada pin 10
delay(500);//waktu(milisecond)
} 
