#include <stdio.h>

int main() {

    // Declaração das variáveis inteiras para armazenar os números e resultados
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    // Solicita ao usuário que digite o primeiro número
    printf("Entre com o primeiro numero: ");
    scanf("%d", &numero1);

    // Solicita ao usuário que digite o segundo número
    printf("Entre com segundo numero: ");
    scanf("%d", &numero2);

    // Realiza a operação de soma
    soma = numero1 + numero2;

    // Realiza a operação de subtração
    subtracao = numero1 - numero2;

    // Realiza a operação de multiplicação
    multiplicacao = numero1 * numero2;

    // Realiza a operação de divisão
    // Atenção: não está verificando se numero2 é zero, cuidado para não dividir por zero!
    divisao = numero1 / numero2;

    // Exibe os resultados das operações
    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);

    return 0; // Finaliza o programa
}


