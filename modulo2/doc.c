#include <stdio.h>

void abrirArquivo(const char *nomeArquivo) {
    FILE *arquivo;

    // Abre o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        return;
    }

    printf("Arquivo %s aberto com sucesso.\n", nomeArquivo);

    // Fecha o arquivo
    fclose(arquivo);
}

void lerArquivo(const char *nomeArquivo){
    FILE *arquivo;

    // Abre o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        return;
    }

    // Fecha o arquivo
    fclose(arquivo);
}

int main() {
    const char *nomeArquivo = "open.txt";

    abrirArquivo(nomeArquivo);
    lerArquivo(nomeArquivo);

    return 0;
}
