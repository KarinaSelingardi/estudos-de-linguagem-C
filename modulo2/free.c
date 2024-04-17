#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Aloca memória para um array de 3 inteiros
    ptr = (int *)malloc(3 * sizeof(int));
    
    // Verifica se a alocação foi bem-sucedida
    if (ptr == NULL) {
        printf("Falha ao alocar memória\n");
        return 1; // Saída com erro
    }

    // Atribui alguns valores ao array
    for (int i = 0; i < 3; i++) {
        ptr[i] = i * 2; // Multiplica cada elemento do array por 2
    }

    // Imprime os valores do array
    printf("Valores do array antes do realocamento:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Realoca memória para um array de 5 inteiros
    ptr = (int *)realloc(ptr, 5 * sizeof(int));

    // Verifica se o realocamento foi bem-sucedido
    if (ptr == NULL) {
        printf("Falha ao realocar memória\n");
        return 1; // Saída com erro
    }

    // Atribui novos valores ao array
    for (int i = 3; i < 5; i++) {
        ptr[i] = i * 2; // Multiplica cada elemento do array por 2
    }

    // Imprime os valores do array após o realocamento
    printf("Valores do array após o realocamento:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(ptr);

    // Atribui NULL ao ponteiro
    ptr = NULL;

    // Tentativa de acesso após a liberação
    // Isso deve causar um comportamento indefinido
    if (ptr != NULL) {
        printf("Tentando acessar a memória liberada: %d\n", ptr[0]);
    } else {
        printf("Acesso à memória liberada: ponteiro é NULL\n");
    }

    return 0;
}
