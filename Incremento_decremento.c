#include <stdio.h> // Biblioteca padrão de entrada e saída, usada para funções como printf.

int main(){ // Função principal onde o programa começa a rodar.

/*
Operadores de incremento (++) e decremento (--)
Esses operadores são usados para somar ou subtrair 1 ao valor de uma variável.

- Pré-incremento (++a): A variável é aumentada antes de ser usada na expressão.
- Pós-incremento (a++): A variável é usada primeiro e depois é aumentada.

- Pré-decremento (--a): A variável é diminuída antes de ser usada na expressão.
- Pós-decremento (a--): A variável é usada primeiro e depois é diminuída.
*/

// Declarando as variáveis:
int numero1 = 1, resultado;

printf("Antes incremento: %d\n", numero1); // Mostra o valor original de numero1

// Pós-incremento:
// Primeiro usa o valor de numero1 na variável 'resultado', depois soma 1 em numero1
resultado = numero1++;
printf("Apos o Pós-incremento - numero1: %d - resultado:%d\n", numero1, resultado);

// Pré-incremento:
// Primeiro soma 1 em numero1, depois usa esse valor na variável 'resultado'
resultado = ++numero1;
printf("Apos o Pré-incremento - numero1: %d - resultado:%d\n", numero1, resultado);

// Pós-decremento:
// Primeiro usa o valor atual de numero1 em 'resultado', depois subtrai 1 de numero1
resultado = numero1--;
printf("Apos o Pós-decremento - numero1: %d - resultado:%d\n", numero1, resultado);

// Pré-decremento:
// Primeiro subtrai 1 de numero1, depois usa esse novo valor em 'resultado'
resultado = --numero1;
printf("Apos o Pré-decremento - numero1: %d - resultado:%d\n", numero1, resultado);

return 0; // Fim do programa
}