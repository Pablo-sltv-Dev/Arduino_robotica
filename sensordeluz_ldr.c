int Luz = 0; 

void setup()
{
  pinMode(A0, INPUT); 
  Serial.begin(9600); 
  pinMode(2, OUTPUT); 
}

void loop()
{
  Luz = analogRead(A0); 
  Serial.println(Luz);
  if (Luz < 500) {
    digitalWrite(2, HIGH);

  } else {
    digitalWrite(2, LOW);
  }
}
