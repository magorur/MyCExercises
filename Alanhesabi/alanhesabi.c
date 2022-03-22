#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float boy,en,alan,cevre,oran;
	
	printf("boy giriniz: ");
	scanf("%f",&boy);
	
	printf("en giriniz: ");
	scanf("%f",&en);
	
	alan=boy*en;
	cevre=2*(boy+en);
	oran=boy/en;
	
	printf("alan = %f\n",alan);
	printf("cevre = %f\n",cevre);
	printf("b/e orani = %f\n",oran);
	
	return 0;
}
