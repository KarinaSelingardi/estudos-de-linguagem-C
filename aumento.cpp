//programa que conceda aumento de 10% ao sal. dos func. empresa,os quais 
//recebem até R$1000,00

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int salario,salario_total;
	
	
	printf("digite seu salario: ");
	scanf("%d",&salario);
	
	if(salario>=500 && salario<=1000){
		
		salario_total=salario+100;
		printf("seu salario agora eh %d",salario_total);
		
		}else{
			if(salario>1000){
				printf("sem aumeto de salario");
			}else{
				printf("salario invalido");
			}
		}
			
	return 0;	
	}

