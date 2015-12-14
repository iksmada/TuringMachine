# Leitura da Fita, TuringMachine
leitura da fita da Maquina de Turing usando arduino

*Turing Machine on arduino*


## Desenvolvedor
Raphael Adamski 495913

##Material
 - Será usado um motor de passo com 24 passos por ciclo, modelo 15ba-h052-19, marca Minibea, com uma borracha na engrenagem para gerar mais atrito
 
 <img src="https://raw.githubusercontent.com/iksmada/TuringMachine/master/images/1.jpg" width="200">
 - Um sensor de lumisidade do Groove Start Kit Plus, marca Seeed
 
 <img src="https://raw.githubusercontent.com/iksmada/TuringMachine/master/images/2.jpg" alt="http://www.seeedstudio.com/wiki/images/thumb/1/1c/Twig-Light.jpg/400px-Twig-Light.jpg" width="200">
 - Um led para iluminar o sensor
 
 <img src="https://raw.githubusercontent.com/iksmada/TuringMachine/master/images/3.jpg" alt="http://www.seeedstudio.com/wiki/images/thumb/e/e0/LED1.jpg/400px-LED1.jpg" width="200">
 - Display LCD RGD backlight v2.0 do Groove Start Kit Plus, marca Seeed, com 16 colunas e 2 linhas.

 <img src="https://raw.githubusercontent.com/iksmada/TuringMachine/master/images/4.jpg" alt="http://www.seeedstudio.com/wiki/images/thumb/0/03/Serial_LEC_RGB_Backlight_Lcd.jpg/400px-Serial_LEC_RGB_Backlight_Lcd.jpg" width="250">
 - Uma caixa para prender as peças
 - Um arduino Mega/Uno com shield Groove descrito acima para conectar sensor e *display*
 - ULN2003 para fazer a interface entre o arduino e o motor

 <img src="https://raw.githubusercontent.com/iksmada/TuringMachine/master/images/10.jpg" alt="https://electrosome.com/wp-content/uploads/2013/02/ULN2003.jpg" width="100"> <img src="https://raw.githubusercontent.com/iksmada/TuringMachine/master/images/11.jpg" alt="http://www.engineersgarage.com/sites/default/files/ULN2003%20Pin%20Diagram.jpg" width="150">
 - Fita de leitura feita em papelão
 
 <img src="https://raw.githubusercontent.com/iksmada/TuringMachine/master/images/5.jpg" alt="http://i.imgur.com/U6ygEub.jpg?2" height="100">

##Montagem
####A Fita
  será feita em papelão cortado com buracos, como um cartão perfurado, em que teremos valores binarios (furado ou tampado com adesivo)

####Leitura
  A leitura sera feita rodando a fita para direita (motor roda no sentido horário).
  Um led ficará acima da fita e o sensor abaixo da fita, dentro da caixa, com um buraco acima dele (do mesmo tamanho dos buracos da fita) assim a luz ira apenas entrar na caixa quando a fita estiver perfurada.
  Interpretaremos a fita como um numero binário.
  
  <img src="https://raw.githubusercontent.com/iksmada/TuringMachine/master/images/6.jpg" alt="http://i.imgur.com/E7bNhNx.jpg" height="150">
  <img src="https://raw.githubusercontent.com/iksmada/TuringMachine/master/images/7.jpg" alt="http://i.imgur.com/H4tLidi.jpg" height="150">

####Movimentação
  o motor ira girar, assim movimentando a fita, borracha servirá para aumentar o atrito, enquanto as outras partes ficam estáticas
  
  <img src="https://raw.githubusercontent.com/iksmada/TuringMachine/master/images/8.jpg" alt="http://i.imgur.com/lEEKaYy.jpg" height="150">

####Display
  Na primeira linha Irá ser mostrado os valores lidos da esquerda para direita, supondo que o primeira leitura é o bit mais significativo, na segunda linha será mostrado o numero em decimal e ~~hexadecimal~~ ao lado o valor lido pelo sensor.

####Esquemático
  Disponivel [aqui](http://schematics.com/project/turingmachine-24706/)
  
  ![Esquemático feito no schematics.com](https://raw.githubusercontent.com/iksmada/TuringMachine/master/images/9.png)

####Código para o Arduino
  Disponível no repositório em main\main.ino
   
##Resultado

####teste
https://youtu.be/PujN_2U0uNY

[![video Youtube](http://img.youtube.com/vi/PujN_2U0uNY/0.jpg)](https://youtu.be/PujN_2U0uNY)

OBS: neste primeiro video o display mostra o valor lido pelo sensor ao lado do número em decimal.

####final
https://youtu.be/ktRdkW8mEg4

[![video Youtube](http://img.youtube.com/vi/ktRdkW8mEg4/0.jpg)](https://youtu.be/ktRdkW8mEg4)


##Créditos
  Aos colegas [Matheus](https://github.com/matheusvervloet) e [Bruno](https://github.com/brunowilliamsap) pelas idéias sobre como desenvolver o projeto e ao professor [Ricardo Menotti](https://github.com/menotti) pelos ensinamentos na disciplina Microcontroladores e aplicações 2015/2 DC UFSCar.

## Outros trabalhos desta disciplina

https://github.com/Power041/cancela

https://github.com/jblsouza/Lab-Mic-A

https://github.com/iksmada/TuringMachine

https://github.com/Fonseka100/MIC-Amaciante

https://github.com/matheusvervloet/girassolar

https://github.com/alex-dias/TrabalhoFinalMIC2015

https://github.com/gustavocesarlos/trabalhofinalMic

https://github.com/gabrielNT/LabMicApl_TrabalhoFinal

https://github.com/brunowilliamsap/microcontroladores

https://github.com/rodrigoa1990/Projeto-Microcontroladores

https://github.com/matheusDeAlmeida/trabalhoFinalMicrocontroladores

