//programa que calcula a velocidade de queda de um corpo em funcao do tempo.

#include <stdio.h>

#define GRAVIDADE 9.8 // Aceleração da gravidade em m/s^2

int main() {
    float tempo, velocidade_inicial, velocidade_final;

    printf("Digite a velocidade inicial em m/s: ");
    scanf("%f", &velocidade_inicial);

    printf("Digite o tempo de queda em segundos: ");
    scanf("%f", &tempo);

    velocidade_final = velocidade_inicial + GRAVIDADE * tempo;

    printf("A velocidade de queda é %.2f m/s\n", velocidade_final);

    return 0;
}

