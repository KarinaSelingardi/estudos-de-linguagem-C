#include <stdio.h>
#include <stdlib.h>

char matrix[3][3]; /* A matriz do jogo */

char check(void);
void init_matrix(void);
void get_player_move(void);
void get_computer_move(void);
void disp_matrix(void);

int main(void)
{
    char done;

    printf("Este é o jogo-da-velha.\n");
    printf("Você está jogando contra o computador.\n");
    done = ' ';

    init_matrix();

    do
    {
        disp_matrix();
        get_player_move();
        done = check(); /* verifica se há um vencedor */
        if (done != ' ')
            break; /* vencedor! */
        get_computer_move();
        done = check();
    } while (done == ' ');

    if (done == 'X')
        printf("Você ganhou!\n");
    else
        printf("Eu ganhei!!\n");

    disp_matrix(); /* mostra as posições finais */
    return 0;
}

/* Inicializa a matriz */
void init_matrix(void)
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matrix[i][j] = ' ';
        }
    }
}

/* Obtem uma jogada do jogador */
void get_player_move(void)
{
    int x, y;
    printf("Digite as coordenadas para o X (linha e coluna): ");
    scanf("%d %d", &x, &y);
    x--;
    y--;

    if (matrix[x][y] != ' ')
    {
        printf("Posição inválida, tente novamente.\n");
        get_player_move();
    }
    else
    {
        matrix[x][y] = 'X';
    }
}

/* Obtem uma jogada do computador */
void get_computer_move(void)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matrix[i][j] == ' ')
                break;
        }
        if (matrix[i][j] == ' ')
            break;
    }
    if (i * j == 9)
    {
        printf("Empate\n");
        exit(0);
    }
    else
    {
        matrix[i][j] = 'O';
    }
}

/* Mostra a matriz na tela */
void disp_matrix(void)
{
    int t;
    for (t = 0; t < 3; t++)
    {
        printf(" %c | %c | %c ", matrix[t][0], matrix[t][1], matrix[t][2]);
        if (t != 2)
            printf("\n---|---|---\n");
        else
            printf("\n");
    }
}

/* Verifica se há um vencedor */
char check(void)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        /* Verifica as linhas */
        if (matrix[i][0] == matrix[i][1] && matrix[i][0] == matrix[i][2] && matrix[i][0] != ' ')
        {
            return matrix[i][0];
        }
        /* Verifica as colunas */
        if (matrix[0][i] == matrix[1][i] && matrix[0][i] == matrix[2][i] && matrix[0][i] != ' ')
        {
            return matrix[0][i];
        }
    }
    /* Testa as diagonais */
    if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2] && matrix[0][0] != ' ')
    {
        return matrix[0][0];
    }
    if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0] && matrix[0][2] != ' ')
    {
        return matrix[0][2];
    }
    return ' ';
}

