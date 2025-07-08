#include <stdio.h> // Biblioteca padrão para entrada e saída, usada para funções como printf.

int main(){ // Função principal onde o programa começa a execução.


/*
Atribuição Simples (=)
Atribuição com Soma (+=)
Atribuição com  Subtração (-=)
Atribuição com Multiplicação (*=)
Atribuição com Divisão (/=)
*/

//Declarando as Variaveis:
 int numero1 = 10,numero2,resultado;

// Atribuir um valor para o Resultado.
 resultado = 10;

// Exibir o valor do Resultado.
 printf("Resultado é: %d\n", resultado);

 // Atribuir um novo valor para a Variavel resultado somando mais 20.
 resultado += 20;

 // Exibir o valor do Resultado.
 printf("Resultado é: %d\n", resultado);

// resultado =  resultado - o numero1
resultado -= numero1;

 // Exibir o valor do Resultado.
 printf("Resultado é: %d\n", resultado);
// resultado = ressultado  vezes 5;
 resultado *= 5;

  // Exibir o valor do Resultado.
 printf("Resultado é: %d\n", resultado);

// resultado = resultado divido por 2
  resultado /= 2;

   // Exibir o valor do Resultado.
 printf("Resultado é: %d\n", resultado);

}