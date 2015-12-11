#include <Stepper.h>
#include <Wire.h>
#include "rgb_lcd.h"

#define TEMPOINICIO 5
#define VALORMEDIO 5

const int stepsPerRevolution = 24;
rgb_lcd lcd;

const int colorR = 128;
const int colorG = 0;
const int colorB = 0;

int sensor=0;
int ledPin=4;
  
//Inicializa a biblioteca utilizando as portas de 8 a 11 para 
//ligacao ao motor 
Stepper myStepper(stepsPerRevolution, 8,10,9,11); 
  
void setup() 
{ 
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
 //Determina a velocidade inicial do motor 
 myStepper.setSpeed(20);
 lcd.begin(16, 2);
    
    lcd.setRGB(colorR, colorG, colorB);  
    digitalWrite(ledPin,HIGH);
} 
  
void loop() {
  bool continua=true;
  int valor;
  String binario="";
  int decimal=0;
  String hexa;
  
  //Print a message to the LCD.
  lcd.print("initialization"); //printa na linha 0
  for (int i=TEMPOINICIO;i>0;i--){
    lcd.setCursor(0, 1); //linha 1
    lcd.print(i);
    lcd.print("s remaining");
    delay(1000);
  }
  lcd.print(0);
 
 for(int i = 0;i<8;i++){
  //Leitura
  valor = analogRead(sensor);

  //Interpretacao
  if(valor>VALORMEDIO){//está claro 
    binario.concat("1");
    decimal = (decimal*2)+1;
    }
  else{//esta escuro
    binario.concat("0");
    decimal = (decimal*2);
    }

  //Escrevendo no LCD
  lcd.clear(); //linha 1
  lcd.print(binario);
  
  lcd.setCursor(0, 1); //linha 1
  lcd.print(decimal);

  lcd.setCursor(10, 1); //linha 1 penultima coluna
  lcd.print(decimal,HEX);
  //lcd.print(valor);
    
  //Gira o motor no sentido horario a 180 graus
  myStepper.step(6); // 12 = 24(passos por cliclo)/2
  delay(1000);
  
 }
 delay(3000);
 lcd.clear(); 
}

