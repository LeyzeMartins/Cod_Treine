#include <stdio.h> // Biblioteca padrão para entrada e saída, usada para funções como printf.

int main(){ // Função principal onde o programa começa a execução.

/*
Incremento (++)
Pré-Incremento (++a)
Pós-Incremento (a++)
Decremento (--)
Pré-Decremento (--a)
Pós-Decremnto (a--)
*/

//Declarando as Variaveis:
int numero1 = 1, resultado;

printf("Antes incremento: %d\n",numero1);

//Numero1 = Numero1 + 1
//numero1 += 1 SERIA SE USASE O OPERADOR DE ATRIBUIÇÃO
//Pos- incremento
// resultado - numero1;
//numero1++

 resultado = numero1++;
 
//printf("Apos incremento: %d\n",numero1);
printf("Apos  o Pós-incremento - numero1: %d - resultado:%d\n",numero1,resultado);
//Numero1 = Numero1 - 1
//numero1 -= 1 SERIA SE USASE O OPERADOR DE ATRIBUIÇÃO
 //numero1--;
 
resultado = ++numero1;
 

printf("Apos  o Pré-incremento - numero1: %d - resultado:%d\n",numero1,resultado);
//Numero1 = Numero1 - 1
//numero1 -= 1 SERIA SE USASE O OPERADOR DE ATRIBUIÇÃO
 //numero1--;
  

//printf("Apos o Decremento: %d\n",numero1);
resultado = numero1 --;
printf("Apos  o Pos-decremento - numero1: %d - resultado:%d\n",numero1,resultado);


}