#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,i,carpim;
	printf("a sayisi girin:");
	scanf("%d",&a);
	printf("b sayisi girin:");
	scanf("%d",&b);
	carpim=0;
	for(i=0;i<b;i++)
	{
		carpim+=a;
	}
	printf("%d carpi %d = %d",a,b,carpim);
	
	return 0;
}
