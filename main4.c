#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int kola,misir,su,bilet,tutar;
	
	printf("Bilet sayisini giriniz:");
	scanf("%d",&bilet);
	
	printf("Misir sayisini giriniz:");
	scanf("%d",&misir);
	
	printf("Su sayisini giriniz:");
	scanf("%d",&su);
		
	printf("Kola sayisini giriniz:");
	scanf("%d",&kola);
	
	tutar=(bilet*8)+(misir*2)+(su*1)+(kola*2);
	printf("Tutar: %d",tutar);
	
	return 0;
}
