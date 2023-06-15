#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Iniciando o atraso...\n");
    usleep(500000); // Atraso de 500 milissegundos-5s
    sleep(4);
    printf("Atraso concluído!\n");
    return 0;
}

