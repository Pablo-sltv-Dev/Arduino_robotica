#define ledPin1  13
#define ledPin2  12
#define ledPin3  11
#define Botao1  2
#define Botao2  3
#define Botao3  4
#define Buzzer  10 //O buzzer está colocado no pino 10
int EstadoBotao1 = 0;
int EstadoBotao2 = 0;
int EstadoBotao3 = 0;
int Tom = 0; //Variavel para armazenar a nota musical
void setup() {
 pinMode(Buzzer, OUTPUT);
 pinMode(ledPin1, OUTPUT);
 pinMode(Botao1, INPUT);
 pinMode(ledPin2, OUTPUT);
 pinMode(Botao2, INPUT);
 pinMode(ledPin3, OUTPUT);
 pinMode(Botao3, INPUT);
}
void loop(){
 EstadoBotao1 = digitalRead(Botao1);
 EstadoBotao2 = digitalRead(Botao2);
 EstadoBotao3 = digitalRead(Botao3);
  
  
 if(EstadoBotao1 && !EstadoBotao2 && !EstadoBotao3) {
 Tom = 100;
 digitalWrite(ledPin1, HIGH);
 }
 if(EstadoBotao2 && !EstadoBotao1 && !EstadoBotao3) {
 Tom = 200;
 digitalWrite(ledPin2, HIGH);
 }
 if(EstadoBotao3 && !EstadoBotao2 && !EstadoBotao1) {
 Tom = 500;
 digitalWrite(ledPin3, HIGH);
 }
 if(Tom > 0) { 
 digitalWrite(Buzzer, HIGH); 
 delayMicroseconds(Tom); 
 digitalWrite(Buzzer, LOW); 
 delayMicroseconds(Tom); 
 Tom = 0; 
 digitalWrite(ledPin1, LOW);
 digitalWrite(ledPin2, LOW);
 digitalWrite(ledPin3, LOW);
 }
} 
