#include <stdio.h>
#include <string.h>

int main (void)
{
    char s1[80],s2[80];
    
    gets(s1);
    gets(s2);
    
    printf("comprimentos: %d %d\n", strlen(s1),strlen(s2));
    
    if(!strcmp(s1,s2))printf("as strings s�o iguais\n");
    strcat(s1, s2);
    printf("%s\n",s1);
    
    strcpy(s1,"isso � um teste.\n");
    printf(s1);
    if(strchr("alo",'o')) printf(" o est� em alo\n");
    if( strstr("ola aqui","ola"))printf("ola encontrado");
}


