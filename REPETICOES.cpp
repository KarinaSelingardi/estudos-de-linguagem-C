#include<stdio.h>
#include<stdlib.h>

main(){
	
	int cont=0;
	char letra;
	while(letra=getchar()!='q')//funcao getchar captura o caractere digitado
	{
		printf("KARINA...\n");
		fflush(stdin);
		cont++;
	}
	if(cont>10){
		printf("RIBEIRO...\n");
		fflush(stdin);
		cont--;
	}
	
	printf("Parando...\n");
	printf("Repeticoes=%d\n",cont);
	
	system("PAUSE");
}
