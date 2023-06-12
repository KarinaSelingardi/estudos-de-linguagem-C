#include<stdio.h>
#include<stdlib.h>

struct Lista
{
	int valor;
	struct Lista *proximo;// ponteiro para a proxima entrada da lista
	
};
 int main()
{
	struct Lista *inicio=NULL;
	if(inicio==NULL)//se a lista estiver vazia
	{
		printf("Criando Lista...\n");
		inicio=(struct Lista*)malloc(sizeof(struct Lista));//aloca espaço para a estrutura
		printf("Lista criada...\n");
		if(inicio!=NULL)//se a estrutura foi criada
	{ 
	inicio -> valor=100;
	inicio -> proximo=NULL;//não aponta para o proximo nó
		
	
	}
	printf("o valor da variável do primeiro nó eh %d\n",inicio -> valor);
}
system("PAUSE");
return 0;

}


		

