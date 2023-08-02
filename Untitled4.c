#include <stdio.h>
#include<stdlib.h>

int soma(int a,int b);//prototipo da funcao

int main(){
	
    int x,y;
	
	printf("Digite o primeiro número:\n");
	scanf("%d",&x);
	printf("digite o segundo numero\n");
	scanf("%d",&y);
	printf("a soma é:%d\n",soma(x,y));
	
	system("pause");
	
}
int soma(int a,int b)//funcao de fato
{
	int resultado;
	resultado = a+b;
	return resultado;
}

