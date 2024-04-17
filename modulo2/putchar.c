#include <stdio.h>

int main() {
    char myString[] = "Hello";

    // Itera sobre a string e imprime cada caractere usando putchar()
    for (int i = 0; myString[i] != '\0'; i++) {
        putchar(myString[i]);
    }

    putchar('\n'); // Imprime uma nova linha após a string
    printf("%s", myString);

    return 0;
}
