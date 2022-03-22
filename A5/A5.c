#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// kod tam bitmedi
	int a,b,c;
	printf("a sayisi girin:");
	scanf("%d",&a);
	printf("b sayisi girin:");
	scanf("%d",&b);
	printf("c sayisi girin:");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		if(b>c){
			printf("a>b>c");
		}
		else{
			printf("a>c>b");
		}
	}
	else if(b>a && b>c)
	{
		if(a>c){
			printf("b>a>c");
		}
		else{
			printf("b>c>a");
		}
	}
	else if(c>b && c>a)
	{
		if(a<b){
			printf("c>b>a");
		}
		else{
			printf("c>a>b");
		}
	}
	return 0;
}
