#include<stdio.h>
#include<locale.h>
#include<string.h>

typedef struct {
    int cod;
    char descricao[30];
} Departamento;

typedef struct {
    int cod;
    char descricao[30];
} Cargo;

typedef struct {
    char rua[30];
    int numero;
    char cidade[30];
    char estado[3];
} Endereco;

struct Funcionario {
    int cod;
    char nome[30];
    float salario;
    Departamento depto;
    Endereco casa_trabalho[2];
    Cargo cargo;
};

void cadastrarFuncionario(struct Funcionario *, char);
void imprimirFuncionario(struct Funcionario, char);

int main(int argc, char *argv[]) {
    setlocale(LC_ALL,"portuguese");
    struct Funcionario funcionario[2];
    struct Funcionario *ptr1, *ptr2;
    ptr1 = &funcionario[0];
    ptr2 = &funcionario[1];

    if (argc > 1) {
        printf("Nome: %s - Curso: %s - Turma: %s\n", argv[1], argv[2], argv[3]);
    }

    cadastrarFuncionario(ptr1, '1');
    imprimirFuncionario(funcionario[0], '1');
    cadastrarFuncionario(ptr2, '2');
    imprimirFuncionario(funcionario[1], '2');

    return 0;
}

void cadastrarFuncionario(struct Funcionario *func, char n) {
    printf("\n--- Cadastrar Funcionario %c ----\n", n);
    printf("Funcionario %c - Informar Código: ", n);
    scanf("%d", &func->cod); while(getchar() != '\n');
    printf("Funcionario %c - Informar o Nome: ", n);
    scanf("%29[^\n]", func->nome); while(getchar() != '\n');
    printf("Funcionario %c - Informar o Salário: ", n);
    scanf("%f", &func->salario); while(getchar() != '\n');

    // Dados do departamento
    printf("--- Funcionario %c - Departamento ---\n", n);
    printf("Funcionario %c - Informar o Cod.Dpto: ", n);
    scanf("%d", &func->depto.cod); while(getchar() != '\n');
    printf("Funcionario %c - Informar o Desc.Depto: ", n);
    scanf("%29[^\n]", func->depto.descricao); while(getchar() != '\n');

    // Dados do endereço de casa
    printf("--- Funcionario %c - Endereço de Casa ---\n", n);
    printf("Funcionario %c - Casa - Informar a Rua:  ", n);
    scanf("%29[^\n]", func->casa_trabalho[0].rua); while(getchar() != '\n');
    printf("Funcionario %c - Casa - Informar o Número: ", n);
    scanf("%d", &func->casa_trabalho[0].numero); while(getchar() != '\n');
    printf("Funcionario %c - Casa - Informar a Cidade: ", n);
    scanf("%29[^\n]", func->casa_trabalho[0].cidade); while(getchar() != '\n');
    printf("Funcionario %c - Casa - Informar o Estado: ", n);
    scanf("%2s", func->casa_trabalho[0].estado); while(getchar() != '\n');

    // Dados do endereço do trabalho
    printf("--- Funcionário %c - Endereço do Trabalho ---\n", n);
    printf("Funcionario %c - Trabalho - Informar a Rua: ", n);
    scanf("%29[^\n]", func->casa_trabalho[1].rua); while(getchar() != '\n');
    printf("Funcionario %c - Trabalho - Informar o Número: ", n);
    scanf("%d", &func->casa_trabalho[1].numero); while(getchar() != '\n');
    printf("Funcionario %c - Trabalho - Informar a Cidade: ", n);
    scanf("%29[^\n]", func->casa_trabalho[1].cidade); while(getchar() != '\n');
    printf("Funcionario %c - Trabalho - Informar o Estado: ", n);
    scanf("%2s", func->casa_trabalho[1].estado); while(getchar() != '\n');

    // Dados do cargo
    printf("--- Funcionário %c - Cargo ---\n", n);
    printf("Funcionario %c - Informar o Cod.Cargo: ", n);
    scanf("%d", &func->cargo.cod); while(getchar() != '\n');
    printf("Funcionario %c - Informar o Desc.Cargo: ", n);
    scanf("%29[^\n]", func->cargo.descricao); while(getchar() != '\n');
}

void imprimirFuncionario(struct Funcionario func, char n) {
    // Dados do funcionário
    printf("\n--- Dados do Funcionario %c ---\n", n);
    printf("Funcionario %c - Codigo: %d\n", n, func.cod);
    printf("Funcionario %c - Nome: %s\n", n, func.nome);
    printf("Funcionario %c - Salario: %.2f\n", n, func.salario);

    // Dados do departamento
    printf("\n--- Dados do Departamento %c ---\n", n);
    printf("Funcionario %c - Cod.Depto: %d\n", n, func.depto.cod);
    printf("Funcionario %c - Desc.Depto: %s\n", n, func.depto.descricao);

    // Imprimir dados da casa
    printf("\n--- Funcionário %c - Endereço de Casa ---\n", n);
    printf("Funcionario %c - Casa - Rua: %s\n", n, func.casa_trabalho[0].rua);
    printf("Funcionario %c - Casa - Número: %d\n", n, func.casa_trabalho[0].numero);
    printf("Funcionario %c - Casa - Cidade: %s\n", n, func.casa_trabalho[0].cidade);
    printf("Funcionario %c - Casa - Estado: %s\n", n, func.casa_trabalho[0].estado);

    // Imprimir dados do trabalho
    printf("\n--- Funcionário %c - Endereço do Trabalho ---\n", n);
    printf("Funcionario %c - Trabalho - Rua: %s\n", n, func.casa_trabalho[1].rua);
    printf("Funcionario %c - Trabalho - Número: %d\n", n, func.casa_trabalho[1].numero);
    printf("Funcionario %c - Trabalho - Cidade: %s\n", n, func.casa_trabalho[1].cidade);
    printf("Funcionario %c - Trabalho - Estado: %s\n", n, func.casa_trabalho[1].estado);

    // Imprimir dados do cargo
    printf("\n--- Funcionário %c - Dados do Cargo ---\n", n);
    printf("Funcionario %c - Cod.Cargo: %d\n", n, func.cargo.cod);
    printf("Funcionario %c - Desc.Cargo: %s\n", n, func.cargo.descricao);
} 






