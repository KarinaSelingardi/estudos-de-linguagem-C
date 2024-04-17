#include <stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    size_t count = 5 ;
    size_t eltSize = sizeof(int);

    ptr = (int *)calloc(count, eltSize);

    if (ptr == NULL)
    {
        printf("falha ao alocar a memoria\n");
        return 1;
    }
    printf("Valores do array inicializado com zero: \n");
    for ( int i = 0; i < count; i++)
    {
        printf("%d", ptr[i]);
    }
    printf("\n");

    for ( int i = 0; i < count; i++)
    {
        ptr[i]= i*2;
    }
    printf("Valores do array apos atribuicao: \n");
    for(int i = 0; i < count ; i ++)
    {
        printf("%d", ptr[i]);
    }
    printf("\n");

    free(ptr);

    ptr = NULL;

    if(ptr != NULL)
    {
        printf("tentando acessar a memória liberada %d\n", ptr[0]);
    }else 
    {
        printf("Acesso a memoria liberada: ponteiro eh NULL\n");
    }
    return 0;
}