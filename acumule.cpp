#include<stdio.h>
#include<stdlib.h>

main(){
	int x;
	int cont=0;
	int total=0;
	char letra;
	
	while(letra=getchar()!='q'){
		
		printf("digite um número:\n");
		scanf("%d",&x);
		fflush(stdin);
		cont++;
		total=total+x;
	}
	printf("Parando...\n");
	printf("repeticoes = %d e total = %d.\n",cont,total);
	system("PAUSE");
	
}
