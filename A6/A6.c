#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float i,s,toplam,aritmetik;
	printf("sayi girin:");
	scanf("%f",&s);
	for(i=0;i<=s;i++)
	{
		toplam+=i;
		aritmetik=toplam/s;
	}
	printf("aritmetik ortalamaniz: %f",aritmetik);
	return 0;
}
