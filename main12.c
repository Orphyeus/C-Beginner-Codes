#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float s1,s2,s3,proje,ort;
	
	printf("Birinci sinav notunu giriniz: ");
	scanf("%f",&s1);
	
	printf("\nIkinci sinav notunu giriniz: ");
	scanf("%f",&s2);
	
	printf("\nUcuncu sinav notunu giriniz: ");
	scanf("%f",&s3);
	
	printf("\nProje notunu giriniz: ");
	scanf("%f",&proje);
	
	ort=(s1+s2+s3+proje)/4;
	
	printf("\nOrtalamaniz: %f\n\n",ort);
	
	if(ort<=50)
	{
	printf("Sinav sonuc: FF");
	}
	
	if(ort>=50 && ort<60)
	{
	printf("Sinav sonuc: DD");
	}
	
	if(ort>=60 && ort<70)
	{
	printf("Sinav sonuc: CC");
	}
	
	if(ort>=70 && ort<85)
	{
	printf("Sinav sonuc: BB");	
	}
	
	if(ort>=85)
	{
	printf("Sinav sonuc: AA");
	}
	
	return 0;
}
