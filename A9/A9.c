#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int s,birler,onlar,yuzler,toplam;
	
	printf("Disaridan girilen bir sayinin rakamlari toplamini bulan c programi\n  sayi girin:");
	scanf("%d",&s);
	
	birler=s%10;
	onlar=(s%100)/10;
	yuzler=s/100;
	
	toplam=birler+onlar+yuzler;
	printf("cevap = %d",toplam);
	
	
	return 0;
}
