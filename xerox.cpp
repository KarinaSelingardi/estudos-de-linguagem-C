#include<stdio.h>

float calcularValorCopias(int totalCopias){
	
	float valorPorFolha=0.25;
	float valorTotal;
	
	if(totalCopias>100){
		
		valorPorFolha=0.20;
	}
	valorTotal=totalCopias * valorPorFolha;
	
	return valorTotal;
}	
int main(){
	 int totalCopias;
	 printf("digite o total de cópias: ");
	 scanf("%d",&totalCopias);
	 
	 float valorPago = calcularValorCopias(totalCopias);
	 
	 printf("valor a ser pago: R$%.2f\n",valorPago);

return 0;
}

