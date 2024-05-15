#include <stdio.h>

// Função para realizar a busca binária recursiva
int busca_binaria(int lista[], int elemento, int inicio, int fim) {
  if (inicio > fim) { //  intervalo vazio (elemento não encontrado)
    return -1;
  }

  int meio = (inicio + fim) / 2; // Calcula o índice do meio do intervalo

  // Verifica se o elemento está no meio
  if (lista[meio] == elemento) {
    return meio; // Elemento encontrado
  } else if (elemento < lista[meio]) {
    // Busca na metade inferior
    return busca_binaria(lista, elemento, inicio, meio - 1);
  } else {
    // Busca na metade superior
    return busca_binaria(lista, elemento, meio + 1, fim);
  }
}

int main() {
  int lista[] = {10, 20, 30, 40, 50}; // Exemplo de lista ordenada
  int elemento_buscado = 30;
  int tamanho_lista = sizeof(lista) / sizeof(lista[0]); // Tamanho da lista

  int indice_encontrado = busca_binaria(lista, elemento_buscado, 0, tamanho_lista - 1);

  if (indice_encontrado != -1) {
    printf("Elemento %d encontrado no índice %d\n", elemento_buscado, indice_encontrado);
  } else {
    printf("Elemento %d não encontrado na lista.\n", elemento_buscado);
  }

  return 0;
}

