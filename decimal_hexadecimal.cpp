#include <stdio.h>

// Declaração da função que converte decimal para hexadecimal
void decimalParaHexadecimal(int decimal, char *hexadecimal);

int main() {
    int numero;
    char hexadecimal[20]; // Array para armazenar o valor hexadecimal

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Chama a função decimalParaHexadecimal para obter o valor hexadecimal
    decimalParaHexadecimal(numero, hexadecimal);

    printf("O número %d em hexadecimal ehS: %s\n", numero, hexadecimal);

    return 0;
}

// Definição da função para converter decimal para hexadecimal
void decimalParaHexadecimal(int decimal, char *hexadecimal) {
    int i = 0;

    // Verifica se o número é zero, para evitar uma conversão inválida
    if (decimal == 0) {
        hexadecimal[i++] = '0';
    }
    else {
        // Converte o decimal para hexadecimal
        while (decimal > 0) {
            int resto = decimal % 16;
            if (resto < 10) {
                hexadecimal[i++] = '0' + resto;
            } else {
                hexadecimal[i++] = 'A' + (resto - 10);
            }
            decimal /= 16;
        }
    }

    // Adiciona o caractere de término de string
    hexadecimal[i] = '\0';

    // Inverte o valor hexadecimal, pois foi construído de trás para frente
    int inicio = 0;
    int fim = i - 1;
    while (inicio < fim) {
        char temp = hexadecimal[inicio];
        hexadecimal[inicio] = hexadecimal[fim];
        hexadecimal[fim] = temp;
        inicio++;
        fim--;
    }
}

