# TuringMachine
Maquina de Turing usando arduino

*Turing Machine on arduino*


## Desenvolvedor
Raphael Adamski 495913

##Material
 - Será usado um motor de passo com 24 passos por ciclo, modelo 15ba-h052-19, marca Minibea, com uma borracha na engrenagem para gerar mais atrito
 
 <img src="http://i.imgur.com/42vLGos.jpg" width="200">
 - Um sensor de lumisidade do Groove Start Kit Plus, marca Seeed
 
 <img src="http://www.seeedstudio.com/wiki/images/thumb/1/1c/Twig-Light.jpg/400px-Twig-Light.jpg" width="200">
 - Um led para iluminar o sensor
 
 <img src="http://www.seeedstudio.com/wiki/images/thumb/e/e0/LED1.jpg/400px-LED1.jpg" width="200">
 - Display LCD RGD backlight v2.0 do Groove Start Kit Plus, marca Seeed, com 16 colunas e 2 linhas.

 <img src="http://www.seeedstudio.com/wiki/images/thumb/0/03/Serial_LEC_RGB_Backlight_Lcd.jpg/400px-Serial_LEC_RGB_Backlight_Lcd.jpg" width="250">
 - Uma caixa para prender as peças
 - Um arduino Mega/Uno com shield Groove descrito acima para conectar sensor e *display*
 - Fita de leitura feita em papelão
 
 <img src="http://i.imgur.com/U6ygEub.jpg?2" height="100">

##Montagem
####A Fita
  será feita em papelão cortado com buracos, como um cartão perfurado, em que teremos valores binarios (furado ou tampado com fita isolante)

####Leitura
  A leitura sera feita rodando a fita para direita (motor roda no sentido horário).
  Um led ficará acima da fita e o sensor abaixo da fita, dentro da caixa, com um buraco acima dele (do mesmo tamanho dos buracos da fita) assim a luz ira apenas entrar na caixa quando a fita estiver perfurada.
  Interpretaremos a fita como um numero binário.

####Movimentação
  o motor ira girar, assim movimentando a fita, borracha servirá para aumentar o atrito, enquanto as outras partes ficam estáticas

####Display
  Na primeira linha Irá ser mostrado os valores lidos da esquerda para direita, supondo que o primeira leitura é o bit mais significativo, na segunda linha será mostrado o numero em decimal e hexadecimal.

####Esquemático
  Disponivel [aqui](http://schematics.com/project/turingmachine-24706/)
  
  ![Esquemático feito no schematics.com](http://i.imgur.com/qZa9w4y.png?1)
  
##Resultado
https://youtu.be/PujN_2U0uNY

[![video Youtube](http://img.youtube.com/vi/PujN_2U0uNY/0.jpg)](https://youtu.be/PujN_2U0uNY)

OBS: neste primeiro video o display mostra o valor lido pelo sensor ao lado do número em decimal.
