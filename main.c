free(pont1);//libera o espaço alocado

//alocação de memoria

#include <stdio.h>
#include <stdlib.h>

int main(){

  int *p;
  p=(int*)malloc(sizeof(int));
  if(!p)
    {
      printf("Memoria insuficiente!\n");
      exit;
    
    }
  else
  {
    printf("Memoria alocada com sucesso!\n")
  }
  system("pause")
}
