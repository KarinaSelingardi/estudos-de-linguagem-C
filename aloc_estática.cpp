#include <stdio.h>
#include <locale.h>
int soma = 0 ; // variável global, alocação estática
int main () {
setlocale(LC_ALL,"portuguese");
static int i; // variável local, alocação estática
for (i=0; i<1000; i++)
soma += i ;
printf ("Soma de inteiros até 1000: %d\n", soma);
return (0);
}
