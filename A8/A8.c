#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sayi,birler,onlar,yuzler,i,kuptoplami;
	
	printf("*****Armstrong sayi kontroloru*****\n Sayi girin:");
	scanf("%d",&sayi);
	
	birler = sayi%10;
	
	onlar=(sayi%100)/10;
	
	yuzler=sayi/100;
	
	kuptoplami=birler*birler*birler+onlar*onlar*onlar+yuzler*yuzler*yuzler;
	if(sayi<1000 && sayi>0){
		if(sayi==kuptoplami){
			printf("!!!TEBRIKLER!!! %d sayisi aradiginiz kriterde",sayi);
		}
		else{
			printf("%d sayisinin basamaklarinin kupleri toplami kendisine degil %d sayisina esit",sayi,kuptoplami);
		}
	}
	else{
		printf("1 - 999 arasi bir sayi girisi yapiniz");
	}
	
	return 0;
}
