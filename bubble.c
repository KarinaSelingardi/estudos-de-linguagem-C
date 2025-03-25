#include <stdio.h>

int main() {
    int my_array[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = sizeof(my_array) / sizeof(my_array[0]);

    printf("Array inicial: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n\n");

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (my_array[j] > my_array[j + 1]) {
                // Imprime antes do swap
                printf("Troca: %d e %d\n", my_array[j], my_array[j + 1]);

                int temp = my_array[j];
                my_array[j] = my_array[j + 1];
                my_array[j + 1] = temp;

                // Imprime o estado do array após o swap
                printf("Estado do array: ");
                for (int k = 0; k < n; k++) {
                    printf("%d ", my_array[k]);
                }
                printf("\n");
            }
        }
    }

    printf("\nArray ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    return 0;
}

    