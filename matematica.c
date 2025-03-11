#include <stdio.h>

   int main () {
    int numero1, numero2;
    int subtracao, adicao, multiplicacao, divisao;

    printf("Entre com o Número 1:");
    scanf("%d", &numero1);

    printf("Entre com o Número 2:");
    scanf("%d", &numero2);


    // OPERAÇÃO SOMA//
    adicao = numero1 + numero2;
    //OPERAÇÃO DIVISÃO//
    subtracao = numero1 - numero2;
    //OPERAÇÃO MULTIPLICAÇÃO//
    multiplicacao = numero1 * numero2;
    //OPERAÇÃO DIVISÃO//
    divisao = numero1 / numero2;

    printf("A soma é:" "%d\n", adicao);
    printf("A subtração é:" "%d\n", subtracao);
    printf("A multiplicação é:" "%d\n", multiplicacao);
    printf("A divisão é:" "%d", divisao);



}