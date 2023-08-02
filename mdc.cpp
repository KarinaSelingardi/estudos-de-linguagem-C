#include <stdio.h>
#include<stdlib.h>

int mdc(int m,int n){
	int r= m%n;
	
	if(r==0)
	return n;
	return mdc(n,(m%n));
}
main()
{
	int a = 983;int b = 12;
	printf("%d\n",mdc(a,b));
	system("pause");
}
