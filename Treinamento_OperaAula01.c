#include <stdio.h> // Importa a biblioteca padrão para entrada e saída

int main() {
    /*
    Operações básicas em C:
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2; // Variáveis para armazenar os números digitados pelo usuário
    int soma, subtracao, multiplicacao, divisao; // Variáveis para armazenar os resultados

    // Pede ao usuário para digitar o primeiro número
    printf("Digite o primeiro numero:\n");
    scanf("%d", &numero1); // Lê o número digitado e armazena em numero1

    // Pede ao usuário para digitar o segundo número
    printf("Digite o segundo numero:\n");
    scanf("%d", &numero2); // Lê o número digitado e armazena em numero2

    // Realiza as operações matemáticas
    soma = numero1 + numero2; // Calcula a soma
    subtracao = numero1 - numero2; // Calcula a subtração
    multiplicacao = numero1 * numero2; // Calcula a multiplicação
    divisao = numero1 / numero2; // Calcula a divisão (divisão inteira em C)

    // Exibe os resultados na tela
    printf("A Soma é: %d\n", soma); // Mostra o resultado da soma
    printf("A Subtração é: %d\n", subtracao); // Mostra o resultado da subtração
    printf("A Multiplicação é: %d\n", multiplicacao); // Mostra o resultado da multiplicação
    printf("A Divisão é: %d\n", divisao); // Mostra o resultado da divisão

    return 0; // Retorna 0 para indicar que o programa terminou sem erros
}