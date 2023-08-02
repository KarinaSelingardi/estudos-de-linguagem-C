#include<stdio.h>

int calcularFatorial(int num)
{
	if(num==0||num==1){
		return 1;
	}else
	{
		return num *calcularFatorial(num-1);
	}
}

int main()
{
	int numero,fatorial;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d",&numero);
	
	fatorial= calcularFatorial(numero);
	printf("O fatorial de %d eh:%d\n",numero,fatorial);
	
	return 0;
}
