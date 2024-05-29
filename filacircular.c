#include <stdio.h>

#define MAX_FILA 100 // Tamanho máximo da fila

typedef struct {
  int valor; // Valor do elemento
} Elemento;

Elemento fila[MAX_FILA]; // Vetor para armazenar os elementos da fila
int inicio = -1; // Índice do primeiro elemento da fila
int fim = -1; // Índice do último elemento da fila

// Função para enfileirar um elemento na fila
int enfileirar(Elemento elemento) {
  if (!((inicio == 0 && fim == MAX_FILA - 1) || (inicio == fim + 1))) { // Verifica se a fila está cheia
    if ((fim == MAX_FILA - 1) || fim == -1) { // Se o fim da fila está no final do vetor ou é inválido
      fila[0] = elemento; // Insere o elemento no início da fila
      fim = 0; // Atualiza o índice do fim da fila para o início
      if (inicio == -1) inicio = 0; // Se a fila estava vazia, atualiza o índice do início para o início
    } else {
      fila[++fim] = elemento; // Insere o elemento no final da fila e incrementa o índice do fim
      return 1; // Retorna 1 para indicar sucesso
    }
  } else {
    return 0; // Retorna 0 para indicar falha (fila cheia)
  } 
}

// Função para desenfileirar um elemento da fila
Elemento desenfileirar(void) {
  Elemento elem_temp;
  if (inicio != -1) { // Verifica se a fila está vazia
    elem_temp = fila[inicio]; // Armazena o elemento do início da fila em uma variável temporária
    if (inicio == fim) { // Se a fila contém apenas um elemento
      fim = inicio = -1; // Define os índices do início e fim como inválidos (fila vazia)
    } else if (inicio == MAX_FILA - 1) { // Se o início da fila está no final do vetor
      inicio = 0; // Move o índice do início para o início do vetor
    } else {
      inicio++; // Incrementa o índice do início da fila
      return elem_temp; // Retorna o elemento desenfileirado
    }
  } else {
    return(Elemento);// Retorna NULL para indicar falha (fila vazia)
  }
}

int main() {
  // Exemplo de uso das funções enfileirar e desenfileirar
  Elemento elemento1 = {10};
  Elemento elemento2 = {20};
  Elemento elemento3 = {30};

  enfileirar(elemento1);
  enfileirar(elemento2);
  enfileirar(elemento3);

  Elemento elem_desenf = desenfileirar();
  printf("Elemento desenfileirado: %d\n", elem_desenf.valor);

  elem_desenf = desenfileirar();
  printf("Elemento desenfileirado: %d\n", elem_desenf.valor);

  elem_desenf = desenfileirar();
  printf("Elemento desenfileirado: %d\n", elem_desenf.valor);

  if (desenfileirar() == 0) {
    printf("Fila vazia!\n");
  }

  return 0;
}



