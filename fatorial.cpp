#include<stdio.h>
#include<stdlib.h>

int fatorial(int valor)
{
	if(valor == 1){
	
	return(1);
}
	else{
	
	
	return(valor *fatorial(valor-1));
}
       int main()
	   



	int i;
	for(i=1;i<=5;i++){
	
	
		
	printf("o fatorial de %d eh %d\n",fatorial(i));
	
	system ("pause");
}


