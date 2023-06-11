#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[5];
    int maior = 0;
    int menor = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        if (i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        } else {
            if (numeros[i] > maior) {
                maior = numeros[i];
            }

            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }
    }

    printf("A amplitude total é %d.\n", maior - menor);

    return 0;
}

