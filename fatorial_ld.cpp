#include <stdio.h>

// Declaração da função que calcula o fatorial
long int calcularFatorial(long int numero);

int main() {
    long int numero, fatorial;

    printf("Digite um numero inteiro longo: ");
    scanf("%ld", &numero);

    // Chama a função calcularFatorial para obter o resultado
    fatorial = calcularFatorial(numero);

    printf("O fatorial de %ld eh %ld\n", numero, fatorial);

    return 0;
}

// Definição da função para calcular o fatorial
long int calcularFatorial(long int numero) {
    long int resultado = 1;

    // Calcula o fatorial usando um loop for
    for (long int i = 1; i <= numero; i++) {
        resultado *= i;
    }

    return resultado;
}


