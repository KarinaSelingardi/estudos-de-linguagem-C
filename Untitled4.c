#include <stdio.h>
#include<stdlib.h>

int soma(int a,int b);//prototipo da funcao

int main(){
	
    int x,y;
	
	printf("Digite o primeiro n�mero:\n");
	scanf("%d",&x);
	printf("digite o segundo numero\n");
	scanf("%d",&y);
	printf("a soma �:%d\n",soma(x,y));
	
	system("pause");
	
}
int soma(int a,int b)//funcao de fato
{
	int resultado;
	resultado = a+b;
	return resultado;
}

