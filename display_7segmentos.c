// Display de 7 Segmentos

#define A 12
#define B 11
#define C 10
#define D 9
#define E 8
#define F 7
#define G 6
#define PONTO 5

#define pot A0



void setup() {
  
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
pinMode(E,OUTPUT);
pinMode(F,OUTPUT);
pinMode(G,OUTPUT);
pinMode(PONTO,OUTPUT);
Serial.begin(9600); 
  

}

void loop() {

int contador = analogRead(pot);
Serial.println(contador);
  delay(500);


if (contador==0){

  zero();
}

else if (contador>0 && contador<100){
  um();
}

else if (contador>100 && contador<200){
  dois();
}

else if (contador>200 && contador<300){
  tres();
}

else if (contador>300 && contador<400){
  quatro();
}

else if (contador>400 && contador<500){
  cinco();
}

else if (contador>500 && contador<600){
  seis();
}

else if (contador>600 && contador<700){
  sete();
}

else if (contador>700 && contador<800){
  oito();
}

else{
  nove();
}

 
}


void zero (){

digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,LOW);
  
}

void um (){
digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
}


void dois (){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,LOW);
digitalWrite(G,HIGH);
}


void tres (){

digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,HIGH);
  
}
void quatro (){

digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
  
}
void cinco (){

digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,LOW);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
  
}
void seis (){

digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
  
}
void sete (){

digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
  
}
void oito (){

digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
  
}
void nove (){

digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
  
}
