#define VERMELHO 3
#define VERDE 5
#define AZUL 6




void setup()
{
  pinMode(VERMELHO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);
  

}




void loop()
{

  //vermelho
  digitalWrite(VERMELHO, HIGH);
  digitalWrite(VERDE, LOW);
  digitalWrite(AZUL, LOW);

  delay(500);

  //VERDE
  digitalWrite(VERMELHO, LOW);
  digitalWrite(VERDE, HIGH);
  digitalWrite(AZUL, LOW);

  delay(500);


  //AZUL
  digitalWrite(VERMELHO, LOW);
  digitalWrite(VERDE, LOW);
  digitalWrite(AZUL, HIGH);

  delay(500);
  
}
