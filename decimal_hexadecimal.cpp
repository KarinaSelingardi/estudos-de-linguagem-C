#include <stdio.h>

// Declara��o da fun��o que converte decimal para hexadecimal
void decimalParaHexadecimal(int decimal, char *hexadecimal);

int main() {
    int numero;
    char hexadecimal[20]; // Array para armazenar o valor hexadecimal

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Chama a fun��o decimalParaHexadecimal para obter o valor hexadecimal
    decimalParaHexadecimal(numero, hexadecimal);

    printf("O n�mero %d em hexadecimal ehS: %s\n", numero, hexadecimal);

    return 0;
}

// Defini��o da fun��o para converter decimal para hexadecimal
void decimalParaHexadecimal(int decimal, char *hexadecimal) {
    int i = 0;

    // Verifica se o n�mero � zero, para evitar uma convers�o inv�lida
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

    // Adiciona o caractere de t�rmino de string
    hexadecimal[i] = '\0';

    // Inverte o valor hexadecimal, pois foi constru�do de tr�s para frente
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

