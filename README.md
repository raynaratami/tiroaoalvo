# Tiro ao alvo 🏹
Projeto de reflexo rápido com Arduino: dois jogadores competem para apertar o botão primeiro. LEDs e buzzer indicam quem venceu. O perdedor recebe uma torta na cara (manual). O código em C++ controla a lógica, identifica o primeiro toque e bloqueia o outro botão para evitar empate.

Este projeto consiste em um sistema interativo de tiro ao alvo com 3 alvos mecânicos controlados por servos usando Arduino. Quando um alvo é derrubado, ele cai (movimento do servo) e pode ser levantado novamente com o botão de reset, que também aciona um som indicando a reposição.

# Como Funciona

Há 3 alvos mecânicos acionados por servos.

O jogador tenta “derrubar” o alvo (por exemplo, acertando um botão ou sensor ligado ao alvo).

Quando o alvo é atingido, o servo move o alvo para a posição “abaixada”.

Um botão de reset levanta todos os alvos, reposicionando os servos para a posição inicial.

Ao apertar o botão de reset, um buzzer toca um som indicando que os alvos foram reposicionados.

# Componentes Utilizados

Arduino Uno (ou compatível)

3x Servo motores

Botão

Buzzer para sinal sonoro

Jumpers, resistores e protoboard

# Código

O código em C++ para Arduino controla o movimento dos servos para abaixar e levantar os alvos, monitora o botão de reset e aciona o buzzer para o som de reposição.
