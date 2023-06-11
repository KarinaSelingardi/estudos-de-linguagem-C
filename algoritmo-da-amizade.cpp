#include <stdio.h>
#include <stdlib.h>

int main() {
    char casa;
    char refeicao;
    char bebida;
    char tipo;
    char interesse[100];
    char compartilho;

    do {
        printf("alguem em casa? s/n\n");
        scanf(" %c", &casa);
        fflush(stdin);

        if (casa == 's') {
            break;
        }

        printf("deixar mensagem...\n");
        printf("esperar pelo retorno da pessoa...\n");
        system("pause");
    } while (casa != 's');

    printf("gostaria de compartilhar a refeicao?s/n\n");
    scanf(" %c", &refeicao);

    if (refeicao == 's') {
        printf("vamos jantar...\n");
        printf("inicio da amizade!!!");
        system("pause");
        exit(1);
    } else {
        printf("gostaria de uma bebida quente?s/n\n");
        fflush(stdin);
        scanf(" %c", &bebida);

        if (bebida == 's') {
            printf("1.cha\n");
            printf("2.cafe\n");
            printf("3.chocolate\n");

            fflush(stdin);
            scanf(" %c", &tipo);

            switch (tipo) {
                case '1':
                    printf("cha...\n");
                    break;
                case '2':
                    printf("cafe...\n");
                    break;
                case '3':
                    printf("chocolate...\n");
                    break;
                default:
                    printf("opcao invalida!\n");
                    break;
            }
            printf("inicio da amizade!!!\n");
            system("pause");
            exit(1);
        } else {
            printf("inicio da amizade!!\n");
            system("pause");
            exit(1);
        }
    }

    printf("conte-me um de seus interesses!\n");
    scanf("%s", interesse);
    printf("o interesse eh: %s\n", interesse);
    system("pause");

    printf("compartilho do interesse?\n");
    fflush(stdin);
    scanf(" %c", &compartilho);

    if (compartilho == 's') {
        printf("por que nao fazemos aquilo juntos?\n");
        system("pause");
    } else {
        printf("nao compartilho esse interesse...\n");
        system("pause");
        exit(1);
    }

    printf("inicio da amizade!!!\n");
    system("pause");

    return 0;
}
*
