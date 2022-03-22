#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int s,i,toplam;
	toplam=0;
	printf("sayi girin:");
	scanf("%d",&s);
	for(i=0;i<=s;i++)
	{
		toplam+=i;
	}
	printf("kumulatif toplam = %d",toplam);
	
	return 0;
}
