#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float s1,s2,s3,ort;
	
	printf("S1 giriniz:");
	scanf("%f",&s1);
	
	printf("S2 giriniz:");
	scanf("%f",&s2);
	
	printf("S3 giriniz:");
	scanf("%f",&s3);
	
	ort=(s1+s2+s3)/3;
	
	printf("Ortalama: %f",ort);
	
	return 0;
}
