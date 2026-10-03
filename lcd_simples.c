
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


//criando o objeto lcd
LiquidCrystal_I2C lcd(0x27,16,2); // endereço I2C, tamanho do display LCD (16,2)

void setup() {
  
  
lcd.init(); // Começa o LCD 
lcd.setBacklight(HIGH);  //comando para ligar a luz de fundo do LCD (backlight);
  
  
  
lcd.setCursor(4,0);
lcd.print("Projeto");
  
lcd.setCursor(5,1);
lcd.print("com LCD");

  
}


void loop() {
  
}
