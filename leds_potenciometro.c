
const int potPin = A0;   //constante para definir o pino do potenciometro
const int quantLeds = 5; //quantidade de leds para cada bargraph

int ledPinsVerm[] = {6, 5, 4, 3, 2}; //pinos onde os leds vermelhos estão conectados
int ledPinsVerde[] = {11, 10, 9, 8, 7}; //pinos onde os leds verdes estão conectados

void setup()
{
  for (int i = 0; i < quantLeds; i++) //configura todos os pinos como saídas
  {
    pinMode(ledPinsVerm[i], OUTPUT);
    pinMode(ledPinsVerde[i], OUTPUT);
  }
}

void loop () {

  int valPoten = analogRead(potPin);
  int ledNivel = map(valPoten, 0, 1023, 0, quantLeds);

  for (int i = 0; i < quantLeds; i++)
  {
    if (i < ledNivel)
    {
      digitalWrite(ledPinsVerm[i], HIGH);
      digitalWrite(ledPinsVerde[i], HIGH);
    }
    else
    {
      digitalWrite(ledPinsVerm[i], LOW);
      digitalWrite(ledPinsVerde[i], LOW);
    }
  }
}
