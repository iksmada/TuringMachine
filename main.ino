#include <Stepper.h>
#include <Wire.h>
#include "rgb_lcd.h"

const int stepsPerRevolution = 24;
rgb_lcd lcd;

const int colorR = 255;
const int colorG = 0;
const int colorB = 0;
  
//Inicializa a biblioteca utilizando as portas de 8 a 11 para 
//ligacao ao motor 
Stepper myStepper(stepsPerRevolution, 8,10,9,11); 
  
void setup() 
{ 
  Serial.begin(9600);
 //Determina a velocidade inicial do motor 
 myStepper.setSpeed(10);
 lcd.begin(16, 2);
    
    lcd.setRGB(colorR, colorG, colorB);
    
    // Print a message to the LCD.
    lcd.print("hello, world!");

    delay(1000);
} 
  
void loop() 
{ 
 //Gira o motor no sentido horario a 90 graus
 /*for (int i = 0; i<=3; i++)
 {
 myStepper.step(-512); 
 delay(2000);
 }
  
 //Gira o motor no sentido anti-horario a 120 graus
 for (int i = 0; i<=2; i++)
 {
 myStepper.step(682); 
 delay(2000);
 }*/
 
 //Gira o motor no sentido horario, aumentando a
 //velocidade gradativamente
 for (int i = 24; i<=24; i=i+1)
 {
 Serial.println(i);
 myStepper.setSpeed(5);
 myStepper.step(i);
 //delay(2000);
 }
 lcd.setCursor(0, 1);
    // print the number of seconds since reset:
    lcd.print(millis()/1000);

    delay(100);
 delay(2000); 
}
