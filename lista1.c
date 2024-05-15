#include <stdio.h>

#define N 10 // Tamanho da lista

typedef struct {
  int chave;
  int valor;
} Item;

Item lista[N];
int n = 0; // Número de elementos na lista

// Função para buscar um elemento na lista
int buscar(int chave) {
  if (n > 0) {
    for (int i = 1; i <= n; i++) {
      if (lista[i].chave == chave) {
        return i;
      }
    }
  }
  return N + 1; // Retorna o próximo índice disponível (se não encontrado)
}

// Função para inserir um elemento na lista
int inserir(Item novo_elemento) {
  if (buscar(novo_elemento.chave) == N + 1) { // Elemento não existe
    if (n + 1 <= N) { // Há espaço na lista
      lista[n + 1] = novo_elemento;
      n++;
      return 1; // Inserção bem-sucedida
    } else {
      return -1; // Lista cheia
    }
  } else {
    return -2; // Chave já existe na lista
  }
}

// Função para remover um elemento da lista
int remover(int chave) {
  if (n > 0) {
    int i = buscar(chave);
    if (i < n + 1) { // Elemento encontrado
      for (int a = i; a < n; a++) {
        lista[a] = lista[a + 1];
      }
      n--;
      return 1; // Remoção bem-sucedida
    } else {
      return -1; // Elemento não encontrado
    }
  } else {
    printf("Erro: lista vazia\n");
    return -2; // Lista vazia
  }
}

int main() {
  lista[0].chave = 10;
  lista[1].chave = 20;
  lista[2].chave = 30;

  n = 3; // Número inicial de elementos na lista

  // Exemplo de uso das funções
  Item novo_elemento = {40, 100};
  int resultado_insercao = inserir(novo_elemento);

  if (resultado_insercao == 1) {
    printf("Elemento 40 inserido com sucesso!\n");
  } else if (resultado_insercao == -2) {
    printf("Erro: Chave 40 já existe na lista.\n");
  } else {
    printf("Erro: Lista cheia.\n");
  }

  int resultado_remocao = remover(20);

  if (resultado_remocao == 1) {
    printf("Elemento 20 removido com sucesso!\n");
  } else if (resultado_remocao == -1) {
    printf("Erro: Elemento 20 não encontrado.\n");
  } else {
    printf("Erro: lista vazia.\n");
  }

  return 0;
}
