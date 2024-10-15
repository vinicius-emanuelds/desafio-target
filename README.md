### 1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

arquivo fibonacci.c

### 2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.

arquivo strings.c

### 3) Observe o trecho de código abaixo: 
```
int INDICE = 12, SOMA = 0, K = 1; 

enquanto K < INDICE faça {
    K = K + 1; SOMA = SOMA + K; 
}

imprimir(SOMA);
```
Ao final do processamento, qual será o valor da variável SOMA? 77

### 4) Descubra a lógica e complete o próximo elemento:
a) 1, 3, 5, 7, ___ : Sequência de números ímpares. Próximo elemento = 9

b) 2, 4, 8, 16, 32, 64, ____: o próximo número é o dobro do anterior (ou 2^x, com x iniciando em 1 e incrementando de 1 em 1). Próximo elemento = 128

c) 0, 1, 4, 9, 16, 25, 36, ____: sequência de quadrados perfeitos (x^2, com x iniciando em 1 e incrementando de 1 em 1). Próximo elemento = 49

d) 4, 16, 36, 64, ____: sequência de quadrados pereitos com numeros pares. Próximo elemento = 100

e) 1, 1, 2, 3, 5, 8, ____: Soma dos dois elementos anteriores (Fibonacci). Próximo elemento = 13

f) 2,10, 12, 16, 17, 18, 19, ____: números que começam com "D". Próximo elemento = 200


### 5) Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em salas diferentes. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual lâmpada. Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada? 
- Ligaria um dos interruptores e deixaria ligado por alguns minutos. após, desligaria.
- Ligaria um segundo interruptor.
- Iria até uma das salas e verificaria:
   * se a lâmpada está acessa, corresponde ao 2º interruptor;
   * se a lâmpada está apagada, mas quente, corresponde ao 1º interruptor;
   * se a lâmpada está apagada e fria, corresponde ao 3º interruptor;
- Repetiria o processo, excluindo o interruptor correspondente à sala anterior.
- Assim, definiria as 3 correspondências com apenas 2 idas à sala com lâmpadas.
