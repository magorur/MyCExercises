#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,s,karetop;
	karetop=0;
	printf("sayi gir:");
	scanf("%d",&s);
	for(i=0;i<=s;i++)
	{
		karetop+=i*i;
	}
	printf("karelertoplami = %d",karetop);
	return 0;
}
