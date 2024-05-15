#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int dado;
  struct no *proximo;
} No;

// Função para criar um novo nó
No* criarNo(int dado) {
  No* novoNo = (No*) malloc(sizeof(No));
  if (novoNo == NULL) {
    printf("Erro ao alocar memória para novo nó!\n");
    return NULL;
  }

  novoNo->dado = dado;
  novoNo->proximo = NULL;
  return novoNo;
}

// Função para inserir um nó no início da lista
void inserirInicio(No** lista, int dado) {
  No* novoNo = criarNo(dado);
  if (novoNo == NULL) {
    return;
  }

  novoNo->proximo = *lista;
  *lista = novoNo;
}

// Função para inserir um nó no final da lista
void inserirFim(No** lista, int dado) {
  No* novoNo = criarNo(dado);
  if (novoNo == NULL) {
    return;
  }

  if (*lista == NULL) {
    *lista = novoNo;
    return;
  }

  No* aux = *lista;
  while (aux->proximo != NULL) {
    aux = aux->proximo;
  }

  aux->proximo = novoNo;
}

// Função para remover um nó da lista
No* removerNo(No** lista, int dado) {
  if (*lista == NULL) {
    return NULL;
  }

  No* anterior = NULL;
  No* atual = *lista;

  while (atual != NULL && atual->dado != dado) {
    anterior = atual;
    atual = atual->proximo;
  }

  if (atual == NULL) {
    return NULL; // Nó não encontrado
  }

  if (anterior == NULL) {
    *lista = atual->proximo;
  } else {
    anterior->proximo = atual->proximo;
  }

  free(atual);
  return atual;
}

// Função para imprimir a lista
void imprimirLista(No* lista) {
  while (lista != NULL) {
    printf("%d ", lista->dado);
    lista = lista->proximo;
  }
  printf("\n");
}

int main() {
  No* lista = NULL;

  // Inserir alguns elementos na lista
  inserirInicio(&lista, 10);
  inserirInicio(&lista, 20);
  inserirInicio(&lista, 30);

  // Imprimir a lista
  imprimirLista(lista);

  // Remover um elemento da lista
  removerNo(&lista, 20);

  // Imprimir a lista novamente
  imprimirLista(lista);

  // Inserir um elemento no final da lista
  inserirFim(&lista, 40);

  // Imprimir a lista novamente
  imprimirLista(lista);

  return 0;
}

