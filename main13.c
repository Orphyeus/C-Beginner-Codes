#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float kitap,tutar,indirimli_tutar;
	
	printf("*****Altay Kitabevine Hosgeldiniz*****\n\n");
	
	printf("Alacaginiz kitap sayisini giriniz: ");
	scanf("%f",&kitap);
	
	tutar=kitap*10;
	
	if(kitap<10)
	{
	printf("Tutar: %f",tutar);
	}
	
	if(kitap>=10 && kitap<20)
	{
	indirimli_tutar=tutar/100*90;
	
	printf("Tutar= %f",indirimli_tutar);
	}
	
	if(kitap>=20 && kitap<30)
	{
	indirimli_tutar=tutar/100*80;
	
	printf("Tutar: %f",indirimli_tutar);
	}
	
	if(kitap>=30)
	{
	indirimli_tutar=tutar/100*70;
	
	printf("Tutar: %f",indirimli_tutar);
	}
	
	printf("\n\nIyi okumalar :)");
	
	
	
	return 0;
}
