
#define laser 2
#define buzzer 3
#define sensor A0

int luz;

void setup()
{

  pinMode(sensor, INPUT);
  Serial.begin(9600);
  pinMode(laser, OUTPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(laser, HIGH);

}

void loop()
{


  luz = analogRead(sensor);
  Serial.println(luz);



  if (luz < 500) {
    tone(buzzer, 1000);

  } else {
    noTone(buzzer);

  }
}
