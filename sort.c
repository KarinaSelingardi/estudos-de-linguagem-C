#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    int my_array[] = {64, 34, 25, 5, 22, 11, 90, 12};
    int n = sizeof(my_array) / sizeof(my_array[0]);

    printf("Array inicial: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n\n");

    for (int i = 0; i < n-1; i++) {
        int min_index = i;

        // Encontra o índice do menor elemento
        for (int j = i+1; j < n; j++) {
            if (my_array[j] < my_array[min_index]) {
                printf("Novo mínimo encontrado: %d no índice %d\n", my_array[j], j);
                min_index = j;
            }
        }

        int min_value = my_array[min_index];
        printf("Menor valor selecionado: %d, movendo para a posição %d\n", min_value, i);

        // Desloca elementos para a direita
        for (int k = min_index; k > i; k--) {
            my_array[k] = my_array[k-1];
        }

        // Coloca o menor elemento na posição i
        my_array[i] = min_value;

        // Imprime o estado atual do array após cada iteração do i
        printf("Estado do array após iteração %d: ", i + 1);
        for (int l = 0; l < n; l++) {
            printf("%d ", my_array[l]);
        }
        printf("\n");
    }

    printf("\nArray ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", my_array[i]);
        printf("Olá, mundo! Aqui estão alguns caracteres especiais: á, é, í, ó, ú, ç.\n");
    }
    printf("\n");

    return 0;
}