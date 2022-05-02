#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float s1,s2,s3,ort;
	
	printf("Birinci sinav notunu giriniz: ");
	scanf("%f",&s1);
	
	printf("Ikinci sinav notunu giriniz: ");
	scanf("%f",&s2);
	
	printf("Ucuncu sinav notunu giriniz: ");
	scanf("%f",&s3);
	
	ort=(s1+s2+s3)/3;
	
	printf("Ortalama: %f\n\n",ort);
	
	if(ort>=80)
	{
	printf("Tebrikler gectiniz :)");
	}
	
	else
	{
	printf("Maalesef kaldiniz :(");
	}
	
	return 0;
}
