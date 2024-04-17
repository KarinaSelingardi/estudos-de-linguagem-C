#include<stdio.h>
void troca(int *x, int *y){ //sub-rotina 
    int aux;
    if(x!=NULL && y!=NULL){
        aux=*x;
        *x=*y;
        *y=aux;
    }
}
int main(){
    int v1=5, v2=10;
    troca(&v1,&v2);
    printf("v1=%d e v2=%d\n",v1,v2);
}