#include <stdio.h>


float dividir(float a, float b){
	if(b==0){
		printf("erro divisao por zero");
		return 0;
	}else{
		return a/b;
}

}
int main(){
float num1,num2,resultado;
	printf("quais sao os numeros?\n");
	scanf("%f %f",&num1,&num2);
	resultado= dividir(num1,num2);
	printf("Resultado=%2f.\n",resultado);
	return 0;
}
