#include <Servo.h>

Servo servo1;

void setup()
{

  servo1.attach(6);
  Serial.begin(9600);

}

void loop()
{

  int angulo1 = analogRead(A0);

  angulo1 = map (angulo1, 0, 1023, 0, 180);

  servo1.write(angulo1);

  Serial.println(angulo1);

  delay(15);

}
