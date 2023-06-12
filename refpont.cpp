#include<stdio.h>
#include<stdlib.h>
int valor(int*a, int*b)
{
	*a=*a+1;//primeiro argumento foi modificado
	*b=*b+2;//segundo argumento foi modificado
	printf("valores das variaveis dentro da funcao:\n");
	printf("valor1=%d\n",a);
	printf("valor2=%d\n",b);
	
}
main(){
	int n1=1,n2=1,total;
	printf("valores iniciais de n1 e n2:%d e %d\n",n1,n2);
	printf("chamando a funcao...\n");
	valor(&n1,&n2);//passado o endereço da variável
	printf("valores depois de chamada a funcao %d e %d",n1,n2);
}

