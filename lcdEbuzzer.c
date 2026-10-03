

//Bibliotecas para comunicação I2C

#include <Wire.h>
#include <LiquidCrystal_I2C.h>


//criando o objeto lcd
LiquidCrystal_I2C lcd(0x27, 16, 2); // endereço I2C, tamanho do display LCD (16,2)





#define buzzer 3
#define laser 2
#define sensor A0

int luz;


void setup()
{

  Serial.begin(9600);
  lcd.init(); // Começa o LCD
  lcd.setBacklight(HIGH);  //comando para ligar a luz de fundo do LCD (backlight);

  pinMode(laser, OUTPUT);
  digitalWrite(laser, HIGH);

  lcd.setCursor(0, 0);
  lcd.print("Alarme com LCD");

}

void loop()
{

  luz = analogRead(sensor);

  Serial.println(luz);

  lcd.setCursor(0, 1);

  if ( luz < 500) {
    lcd.print("ATENCAO!!!      ");
    tone(buzzer, 1000);

  } else {
    lcd.print("TUDO TRANQUILO");
    noTone(buzzer);
  }
  delay(100);
}
