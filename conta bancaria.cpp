/*caixa eletr�nico*/
#include<stdio.h>>
#include<stdlib.h>

main(){
	
	float s=1000.00,v;
	int op;
	
	do{
		printf("\n 1. Deposito");
		printf("\n 2. Saque");
		printf("\n 3. Saldo");
		printf("\n 4. Sair");
		printf("\n Opcao?");
		scanf("%d",&op);
		switch(op){
			
			case 1:printf("\n Valor do dep�sito?");
			scanf("%f",&v);
			s=s+v;
			break;
			case 2:printf("\n Valor do saque?");
			scanf("%f",&v);
			if(v>s){
				printf("\n Saldo insuficiente");
			
			s=s-v;
			break;
			case 3: printf("\n Saldo atual= R$ %.2f\n",s);
			break;
			default: if(op!=4) printf("\n Opcao invalida!\n");
		}
	}
	}while (op!=4);
	printf("FIM DAS TRANSACOES.\n\n");
	system("PAUSE");
}
