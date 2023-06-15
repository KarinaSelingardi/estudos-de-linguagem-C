#include <stdio.h>
#include <stdlib.h>

struct Pessoa
{
    char nome [30];
    int idade;
};

void alteracao(struct Pessoa *acesso)
{
    acesso -> idade +=20;//adiciona 20 anos a idade
}

int main()
{
    struct Pessoa acesso;

    printf("Entre o nome: \n");
    fgets(acesso.nome, 30, stdin);
    printf("Entre idade: \n");
    scanf("%d", &acesso.idade);

    printf("Dados iniciais: \n");
    printf("Nome:%s\n",acesso.nome);
    printf("Idade:%d\n",acesso.idade);

    alteracao(&acesso);

    printf("Dados apos mudancas:\n");
    printf("Nome:%s\n",acesso.nome);
    printf("Idade:%d\n",acesso.idade);

    return 0;
}

