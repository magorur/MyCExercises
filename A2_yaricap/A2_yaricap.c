#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float r,pi,alan,cevre;
	
	pi=3.14;
	printf("Alan vev Cevre bulmak istediginiz yaricap:");
	scanf("%f",&r);
	alan=pi*r*r;
	cevre=2*pi*r;
	printf("%f yaricap degeri icin\n Alan=%f \n Cevre=%f",r,alan,cevre);
	
	return 0;
}
