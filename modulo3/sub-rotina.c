#include <stdio.h>

// Declaração da função soma
int soma(int x, int y);

int main(void) {
    int num1, num2, num3;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    // Chamada  da função soma
    num3 = soma(num1, num2);
    
    printf("A soma de %d + %d = %d\n", num1, num2, num3);
    return 0;
}

// Definição da função soma
int soma(int x, int y) {
    return (x + y);
}
