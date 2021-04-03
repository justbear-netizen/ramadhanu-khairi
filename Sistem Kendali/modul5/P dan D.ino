int mKanan1=9;
int mKanan2=10;
int mKiri1=6;
int mKiri2=5;
int EnA= 11;
int EnB= 3;

int Kp = 15;
int Kd = 5;
int rate = 0;
int moveControl = 0;
int kecepatanMotorKanan = 0;
int kecepatanMotorKiri = 0;
int kecepatanSetPoint = 150;

int sensor[8];
int NilaiMaxSensor[8];
int NilaiMinSensor[8];
int NilaiTengahSensor[8];

int led1 = 8;
int led2 = 7;
int kondisix[8];

void setup(){
  Serial.begin(9600);
  pinMode(mKanan1,OUTPUT);
  pinMode(mKanan2,OUTPUT);
  pinMode(mKiri1,OUTPUT);
  pinMode(mKiri2,OUTPUT);
  pinMode(EnA,OUTPUT);
  pinMode(EnB,OUTPUT);

pinMode (A0,INPUT);
pinMode (A1,INPUT);
pinMode (A2,INPUT);
pinMode (A3,INPUT);
pinMode (A4,INPUT);
pinMode (A5,INPUT);
pinMode (A6,INPUT);
pinMode (A7,INPUT);

  for(int i=0; i<8; i++){
    NilaiMaxSensor[i]=1023;
    NilaiMinSensor[i]=0;
  }
}

void loop(){
  String relay1 = String(digitalRead(A0));
  String relay2 = String(digitalRead(A1));
  String relay3 = String(digitalRead(A2));
  String relay4 = String(digitalRead(A3));
  String relay5 = String(digitalRead(A4));
  String relay6 = String(digitalRead(A5));
  String relay7 = String(digitalRead(A6));
  String relay8 = String(digitalRead(A7));

  
  String  kondisi = relay1+relay2+relay3+relay4+relay5+relay6+relay7+relay8;
  if(kondisi == "10000000"){
    satu();
  }
  else if(kondisi == "11000000"){
    dua();
  }
  else if(kondisi == "01000000"){
    tiga();
  }
  else if(kondisi == "01100000"){
    empat();
  }
  else if(kondisi == "00100000"){
    lima();
  }
  else if(kondisi == "00110000"){
    enam();
  }
  else if(kondisi == "00010000"){
    tujuh();
  }
  else if(kondisi == "00011000"){
    delapan();
  }
  else if(kondisi == "00001000"){
    sembilan();
  }
  else if(kondisi == "00001100"){
    sepuluh();
  }
  else if(kondisi == "00000100"){
    sebelas();
  }
  else if(kondisi == "00000110"){
    duabelas();
  }
  else if(kondisi == "00000010"){
    tigabelas();
  }
  else if(kondisi == "00000011"){
    empatbelas();
  }
  else if(kondisi == "00000001"){
    limabelas();
  }
  else if(kondisi == "00000000"){
    enambelas();
  }
  
}
void satu(){
  int Error = -7;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint - moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint + moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = -7");
}
void dua(){
  int Error = -6;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint - moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint + moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = -6");
}
void tiga(){
  int Error = -5;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint - moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint + moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = -5");
}
void empat(){
  int Error = -4;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint - moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint + moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = -4");
}
void lima(){
 int Error = -3;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint - moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint + moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = -3");
}
void enam(){
  int Error = -2;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint + moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint + moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = -2");
}
void tujuh(){
  int Error = -1;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint + moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint + moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = -1");
}
void delapan(){
  int Error = 0;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint + moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint + moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = 0");
}
void sembilan(){
  int Error = 1;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint + moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint + moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = 1");
}
void sepuluh(){
  int Error = 2;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint + moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint + moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = 2");
}
void sebelas(){
 int Error = 3;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint + moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint - moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = 3");
}
void duabelas(){
  int Error = 4;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint + moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint - moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = 4");
}
void tigabelas(){
  int Error = 5;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint + moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint - moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = 5");
}
void empatbelas(){
  int Error = 6;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint + moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint - moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = 6");
}
void limabelas(){
  int Error = 7;
  int LastError = Error;
  int rate = (Error-LastError);
  moveControl = (Kp*Error)+(Kd+rate);
  kecepatanMotorKanan = kecepatanSetPoint + moveControl;
  kecepatanMotorKiri  = kecepatanSetPoint - moveControl;
  digitalWrite(mKanan1,HIGH);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,HIGH);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,kecepatanMotorKanan);
  analogWrite(EnB,kecepatanMotorKiri);
  Serial.println("Error = 7");
}
void enambelas(){
  digitalWrite(mKanan1,LOW);
  digitalWrite(mKanan2,LOW);
  digitalWrite(mKiri1,LOW);
  digitalWrite(mKiri2,LOW);
  analogWrite(EnA,0);
  analogWrite(EnB,0);
  Serial.println("STOP");
}
