#include <stdio.h>
#include <locale.h>
int soma = 0 ; // vari�vel global, aloca��o est�tica
int main () {
setlocale(LC_ALL,"portuguese");
static int i; // vari�vel local, aloca��o est�tica
for (i=0; i<1000; i++)
soma += i ;
printf ("Soma de inteiros at� 1000: %d\n", soma);
return (0);
}
