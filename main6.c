#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float maas,yeni_maas;
	
	printf("Aylik maasinizi giriniz: ");
	scanf("%f",&maas);
	
	yeni_maas=maas/100*112;
	
	printf("Yeni maasiniz: %f",yeni_maas);
	printf("TL...");
	
	return 0;
}
