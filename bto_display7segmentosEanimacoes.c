


int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;


int pinoPotenciometro = A0;

int pinoBotao = 13;

int tempo ;

int contador = 0;

void animacao1();
void animacao2();
void animacao3();
void animacao4();
void animacao5();
void animacao6();
void animacao7();
void animacao8();

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

  pinMode(pinoPotenciometro, INPUT);
  pinMode(pinoBotao, INPUT);


}

void loop()
{
  //lê o potenciômetro
  tempo = analogRead(pinoPotenciometro);
  if ( digitalRead(pinoBotao) == 1 )
  {
    contador++;
    if ( contador > 8 )
    {
      contador = 1;
    }

    //dependendo do número do contador, ligue uma animação
    if ( contador == 1 )
    {
      animacao1();
    }
    if ( contador == 2 )
    {
      animacao2();
    }
    if ( contador == 3 )
    {
      animacao3();
    }
    if (contador == 4 )
    {
      animacao4();
    }
    if ( contador == 5 )
    {
      animacao5();
    }
    if ( contador == 6 )
    {
      animacao6();
    }
    if ( contador == 7 )
    {
      animacao7();
    }
    if ( contador == 8 )
    {
      animacao8();
    }
  }

  delay(10); 


}


// piscar todos os leds duas vezes
void animacao1()
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);

  delay(tempo);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);

  delay(tempo);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);


  delay(tempo);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);


  delay(tempo);

}

// acender e apagar um de cada vez
void animacao2()
{
  digitalWrite(led1, HIGH);
  delay(tempo);
  digitalWrite(led1, LOW);
  delay(tempo);
  digitalWrite(led2, HIGH);
  delay(tempo);
  digitalWrite(led2, LOW);
  delay(tempo);
  digitalWrite(led3, HIGH);
  delay(tempo);
  digitalWrite(led3, LOW);
  delay(tempo);
  digitalWrite(led4, HIGH);
  delay(tempo);
  digitalWrite(led4, LOW);
  delay(tempo);
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led5, LOW);
  delay(tempo);
}

// vai acendendo do último para o primeiro
// vai apagando do primeiro para o último
void animacao3()
{
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led4, HIGH);
  delay(tempo);
  digitalWrite(led3, HIGH);
  delay(tempo);
  digitalWrite(led2, HIGH);
  delay(tempo);
  digitalWrite(led1, HIGH);

  delay(tempo);

  digitalWrite(led1, LOW);
  delay(tempo);
  digitalWrite(led2, LOW);
  delay(tempo);
  digitalWrite(led3, LOW);
  delay(tempo);
  digitalWrite(led4, LOW);
  delay(tempo);
  digitalWrite(led5, LOW);

}

// vai acendendo do primeiro para o último
// vai apagando do último para o primeiro
void animacao4()
{
  digitalWrite(led1, HIGH);
  delay(tempo);
  digitalWrite(led2, HIGH);
  delay(tempo);
  digitalWrite(led3, HIGH);
  delay(tempo);
  digitalWrite(led4, HIGH);
  delay(tempo);
  digitalWrite(led5, HIGH);

  delay(tempo);

  digitalWrite(led5, LOW);
  delay(tempo);
  digitalWrite(led4, LOW);
  delay(tempo);
  digitalWrite(led3, LOW);
  delay(tempo);
  digitalWrite(led2, LOW);
  delay(tempo);
  digitalWrite(led1, LOW);

}

//vai acendendo pelas  pontas
//vai apagando a partir do centro
void animacao5()
{
  digitalWrite(led1, HIGH);
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  delay(tempo);
  digitalWrite(led3, HIGH);

  delay(tempo);

  digitalWrite(led3, LOW);
  delay(tempo);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  delay(tempo);
  digitalWrite(led1, LOW);
  digitalWrite(led5, LOW);

}

//vai acendendo a partir do centro e vai pulando entre a direita e a esquerda
//vai apagando a partir da ponta esquerda e vai pulando entre a esquerda e a direita ate chegar ao centro
void animacao6()
{
  digitalWrite(led3, HIGH);
  delay(tempo);
  digitalWrite(led4, HIGH);
  delay(tempo);
  digitalWrite(led2, HIGH);
  delay(tempo);
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led1, HIGH);

  delay(tempo);

  digitalWrite(led1, LOW);
  delay(tempo);
  digitalWrite(led5, LOW);
  delay(tempo);
  digitalWrite(led2, LOW);
  delay(tempo);
  digitalWrite(led4, LOW);
  delay(tempo);
  digitalWrite(led3, LOW);

}

//vai acendendo a partir do centro e vai pulando entre a esquerda e a direita
//vai apagando a partir da ponta direita e vai pulando entre a direita e a esquerda
void animacao7()
{
  digitalWrite(led3, HIGH);
  delay(tempo);
  digitalWrite(led2, HIGH);
  delay(tempo);
  digitalWrite(led4, HIGH);
  delay(tempo);
  digitalWrite(led1, HIGH);
  delay(tempo);
  digitalWrite(led5, HIGH);

  delay(tempo);

  digitalWrite(led5, LOW);
  delay(tempo);
  digitalWrite(led1, LOW);
  delay(tempo);
  digitalWrite(led4, LOW);
  delay(tempo);
  digitalWrite(led2, LOW);
  delay(tempo);
  digitalWrite(led3, LOW);

}

//vai acendendo a partir da ponta direita e pulando entre a direita e a esquerda
//vai apagando a partir do centro e pulando entre a esquerda e a direita
void animacao8()
{
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led1, HIGH);
  delay(tempo);
  digitalWrite(led4, HIGH);
  delay(tempo);
  digitalWrite(led2, HIGH);
  delay(tempo);
  digitalWrite(led3, HIGH);

  delay(tempo);

  digitalWrite(led3, LOW);
  delay(tempo);
  digitalWrite(led2, LOW);
  delay(tempo);
  digitalWrite(led4, LOW);
  delay(tempo);
  digitalWrite(led1, LOW);
  delay(tempo);
  digitalWrite(led5, LOW);

}
