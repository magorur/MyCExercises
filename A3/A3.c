#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int s,i,tektoplam=0;
	printf("sayi girin:");
	scanf("%d",&s);
	
	for(i=1;i<=s;i+=2)
	{
		tektoplam+=i;
	}
	printf("%d a kadar olan tek sayilarin toplami = %d",s,tektoplam);
	return 0;
}
