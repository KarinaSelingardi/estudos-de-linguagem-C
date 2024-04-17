#include <stdio.h>
#include <math.h>

int busca_binaria(int lista[], int elemento, int inicio, int fim) {
    if (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        
        if (lista[meio] == elemento)
            return meio;
        else if (lista[meio] > elemento)
            return busca_binaria(lista, elemento, inicio, meio - 1);
        else
            return busca_binaria(lista, elemento, meio + 1, fim);
    }
    
    return -1; // Retorna -1 se o elemento não for encontrado
}

int main() {
    int lista[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int elemento = 13;
    int resultado = busca_binaria(lista, elemento, 0, tamanho - 1);
    
    if (resultado != -1)
        printf("Elemento encontrado na posição %d.\n", resultado);
    else
        printf("Elemento não encontrado na lista.\n");
    
    return 0;
}
