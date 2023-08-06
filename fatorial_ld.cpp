#include <stdio.h>

// Declara��o da fun��o que calcula o fatorial
long int calcularFatorial(long int numero);

int main() {
    long int numero, fatorial;

    printf("Digite um numero inteiro longo: ");
    scanf("%ld", &numero);

    // Chama a fun��o calcularFatorial para obter o resultado
    fatorial = calcularFatorial(numero);

    printf("O fatorial de %ld eh %ld\n", numero, fatorial);

    return 0;
}

// Defini��o da fun��o para calcular o fatorial
long int calcularFatorial(long int numero) {
    long int resultado = 1;

    // Calcula o fatorial usando um loop for
    for (long int i = 1; i <= numero; i++) {
        resultado *= i;
    }

    return resultado;
}


