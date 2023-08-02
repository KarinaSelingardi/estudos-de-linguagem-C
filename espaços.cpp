/*conta espaços*/
#include<stdio.h>
int main (void)
{
	char s[80], *str;
	int space;
	
	printf("Digite uma string: ");
	gets(s);
	str = s;
	
	for(space=0; *str; str++){
		if(*str != ' ')continue;
		space++;
	}
	printf("%d espacos\n",space);
}
