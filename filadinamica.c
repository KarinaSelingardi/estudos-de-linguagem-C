#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento {
  int valor; // Valor do elemento
  struct Elemento *prox; // Ponteiro para o próximo elemento
} No;

// Function to enfileirar an element in the queue
int enfileirar(No **inicio, No **fim, struct Elemento elemento) {

}

// Function to desenfileirar an element from the queue
struct Elemento desenfileirar(No **inicio, No **fim) {
  if (*inicio == NULL) { // If the queue is empty
    return (struct Elemento){0}; // Return an empty Elemento structure
  }

  struct Elemento elemento_recuperado; // Declare elemento_recuperado as a struct
  elemento_recuperado.valor = (*inicio)->valor; // Copy the value from the first node

  No *aux = *inicio; // Store the pointer to the first node
  *inicio = (*inicio)->prox; // Update the 'inicio' pointer to the next node

  if (*inicio == NULL) { // If the queue becomes empty after dequeuing
    *fim = NULL; // Set the 'fim' pointer to NULL
  }

  free(aux); // Free the memory of the dequeued node
  return elemento_recuperado; // Return the value of the dequeued element
}

// ... (rest of the code remains the same)


// Function to check if the queue is empty
int fila_vazia(No *inicio) {
  return inicio == NULL;
}

// Function to print the contents of the queue
void imprimir_fila(No *inicio) {
  if (fila_vazia(inicio)) {
    printf("Fila vazia!\n");
    return;
  }

  No *aux = inicio;
  while (aux != NULL) {
    printf("%d ", aux->valor);
    aux = aux->prox;
  }
  printf("\n");
}

int main() {
  No *inicio = NULL, *fim = NULL; // Initialize the 'inicio' and 'fim' pointers with NULL

  // Example of using enfileirar and desenfileirar functions
  struct Elemento elemento1 = {10};
  struct Elemento elemento2 = {20};
  struct Elemento elemento3 = {30};

  enfileirar(&inicio, &fim, elemento1);
  enfileirar(&inicio, &fim, elemento2);
  enfileirar(&inicio, &fim, elemento3);

  printf("Fila atual: ");
  imprimir_fila(inicio);

  struct Elemento elem_desenf = desenfileirar(&inicio, &fim);
  printf("Elemento desenfileirado: %d\n", elem_desenf.valor);

  printf("Fila atual: ");
  imprimir_fila(inicio);

  elem_desenf = desenfileirar(&inicio, &fim);
  printf("Elemento desenfileirado: %d\n", elem_desenf.valor);

  printf("Fila atual: ");
  imprimir_fila(inicio);

  elem_desenf = desenfileirar(&inicio, &fim);
  printf("Elemento desenfileirado: %d\n", elem_desenf.valor);

  printf("Fila atual: ");
  imprimir_fila(inicio);

  if (desenfileirar(&inicio, &fim).valor == 0)  { // Correct comparison using empty Elemento structure
    printf("Fila vazia!\n");
  }

  return 0;
}



