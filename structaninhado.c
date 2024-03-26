#include <stdio.h>
#include <stdlib.h>

struct departamento {
    int cod;
    char descricao[30];
};

struct cargo {
    int cod;
    char descricao[30];
};

struct funcionario {
    int cod;
    char nome[30];
    float salario;
    struct departamento depto;
    struct cargo cargo;
};

// Função para ler os dados de um funcionário
void lerFuncionario(struct funcionario *func) {
    printf("Digite o código do funcionário: ");
    scanf("%d", &func->cod);

    printf("Digite o nome do funcionário: ");
    scanf("%s", func->nome); 

    printf("Digite o salário do funcionário: ");
    scanf("%f", &func->salario);

    printf("Digite o código do departamento: ");
    scanf("%d", &func->depto.cod);

    printf("Digite a descrição do departamento: ");
    scanf("%s", func->depto.descricao);

    printf("Digite o código do cargo: ");
    scanf("%d", &func->cargo.cod);

    printf("Digite a descrição do cargo: ");
    scanf("%s", func->cargo.descricao); 
}

// Função para imprimir os dados de um funcionário
void imprimirFuncionario(struct funcionario *func) {
    printf("\nFuncionário cadastrado:\n");
    printf("Código: %d\n", func->cod);
    printf("Nome: %s\n", func->nome);
    printf("Salário: %.2f\n", func->salario);
    printf("Departamento:\n");
    printf("   Código: %d\n", func->depto.cod);
    printf("   Descrição: %s\n", func->depto.descricao);
    printf("Cargo:\n");
    printf("   Código: %d\n", func->cargo.cod);
    printf("   Descrição: %s\n", func->cargo.descricao);
}

int main(void) {
    struct funcionario func;

    lerFuncionario(&func);
    imprimirFuncionario(&func);

    return 0;
}
