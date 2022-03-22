#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a,b,c,t,i;
	printf("********Fibonacci Dizi Hesaplayici********\nbulmak istediginiz dizi sayisi girin:");
	scanf("%d",&t);
	a=0;
	b=1;
	printf("%d\n",b);
	for(i=0;i<=t-2;i++)
	{
		c=a+b;
		a= b;
		b= c;
		printf("%d\n",c);
	}
	
	
	return 0;
}
