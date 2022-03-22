#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float s1,s2,s3,p1,ort;
	printf("1. sinav notu: ");
	scanf("%f",&s1);
	
	printf("2. sinav notu: ");
	scanf("%f",&s2);
	
	printf("3. sinav notu: ");
	scanf("%f",&s3);
	
	printf("proje notu: ");
	scanf("%f",&p1);
	
	ort= (s1+s2+s3+p1)/4;
	printf("ortalama: %f",ort);
	
	return 0;
}
