//teste senha do cliente

#include<stdio.h>
#include<stdlib.h>
 
 main(){
 	int cont=1;char senha;
 	
 	do{
 		printf("digite a senha:\n");
 		scanf("%c",&senha);
 		fflush(stdin);
 		cont++;
 		if(senha=='a'&& senha=='b'&& senha=='h'){
 			printf("CERTA!\n");
 			break;
		 }
		 if(cont>3){
		 	printf("senha incorreta\n");
		 	system("PAUSE");
		 	exit(1);
		 }
 		
 		
	 }while(1);//enquanto for verdade
	 system("PAUSE");
 }
