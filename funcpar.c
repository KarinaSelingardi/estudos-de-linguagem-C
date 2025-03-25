// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Protótipos de Funções
void func01();
int func02();
void func03(int, int*);
int func04(int, int*);

// Função main()
int main() {
    // Declarar 3 variáveis (int) com valores igual a zero
    int a = 0, b = 0, c = 0;

    // Executar a função setlocale() com parâmetros (LC_ALL, "")
    setlocale(LC_ALL, "");

    // Atribuir valores às variáveis
    a = 10;
    b = 20;
    c = 30;
    
    printf("Antes de func01: a = %d, b = %d, c = %d\n", a, b, c);
    
    // Executar a função: func01 - SEM RETORNO E SEM PARÂMETROS
    func01();

    // Imprimir os valores das variáveis
    printf("Depois de func01: a = %d, b = %d, c = %d\n", a, b, c);

    // Atribuir valores às variáveis
    a = 10;
    b = 20;
    c = 30;

    printf("Antes de func02: a = %d, b = %d, c = %d\n", a, b, c);
    
    // Executar a função: func02 - COM RETORNO (primeira variável) E SEM PARÂMETROS
    a = func02();
    b = func02();
    c = func02();

    // Imprimir os valores das variáveis
    printf("Depois de func02: a = %d, b = %d, c = %d\n", a, b, c);

    // Atribuir valores às variáveis
    a = 10;
    b = 20;
    c = 30;

    printf("Antes de func03: a = %d, b = %d, c = %d\n", a, b, c);

    // Executar a função: func03 - SEM RETORNO E COM PARÂMETROS
    func03(b, &c);

    // Imprimir os valores das variáveis
    printf("Depois de func03: a = %d, b = %d, c = %d\n", a, b, c);

    // Atribuir valores às variáveis
    a = 10;
    b = 20;
    c = 30;

    printf("Antes de func04: a = %d, b = %d, c = %d\n", a, b, c);

    // Executar a função: func04 - COM RETORNO E COM PARÂMETROS
    a = func04(b, &c);

    // Imprimir os valores das variáveis
    printf("Depois de func04: a = %d, b = %d, c = %d\n", a, b, c);

    // Terminar função main()
    return 0;
}

// Função func01 - SEM RETORNO E SEM PARÂMETROS
void func01() {
    int x = 1, y = 2, z = 3;
    printf("func01 executada: x = %d, y = %d, z = %d\n", x, y, z);
}

// Função func02 - COM RETORNO E SEM PARÂMETROS
int func02() {
    int x = 1, y = 6, z = 7;
    printf("func02 executada: x = %d, y = %d, z = %d\n", x, y, z);
    return x; // Retornar o valor da primeira variável
}

// Função func03 - SEM RETORNO E COM PARÂMETROS
void func03(int y, int *z) {
    int x = 8;
    printf("func03 antes: y = %d, *z = %d\n", y, *z);
    y = 9;
    *z = 11;
    printf("func03 depois: y = %d, *z = %d\n", y, *z);
}

// Função func04 - COM RETORNO E COM PARÂMETROS
int func04(int y, int *z) {
    int x = 11;
    printf("func04 antes: y = %d, *z = %d\n", y, *z);
    y = 12;
    *z = 13;
    printf("func04 depois: y = %d, *z = %d\n", y, *z);
    return x; // Retornar o valor da primeira variável
}