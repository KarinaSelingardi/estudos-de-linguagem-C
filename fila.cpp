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
		inicio=(struct Lista*)malloc(sizeof(struct Lista));//aloca espa�o para a estrutura
		printf("Lista criada...\n");
		if(inicio!=NULL)//se a estrutura foi criada
	{ 
	inicio -> valor=100;
	inicio -> proximo=NULL;//n�o aponta para o proximo n�
		
	
	}
	printf("o valor da vari�vel do primeiro n� eh %d\n",inicio -> valor);
}
system("PAUSE");
return 0;

}


		

