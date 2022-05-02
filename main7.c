#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float r,cevre,alan;
	
	printf("Yaricap giriniz: ");
	scanf("%f",&r);
	
	cevre=2*3.14*r;
	alan=3.14*r*r;
	
	printf("Cevre: %f\n",cevre);
	printf("Alan: %f",alan);
	
	
	return 0;
}
