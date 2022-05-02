#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	int s1,s2,r,secim,sonuc;
	
	printf("Matematik Menusu\n");
	printf("****************\n\n");
	printf("Asagidaki islemlerden birini seciniz\n\n");
	printf("1-Toplama\n");
	printf("2-Cikarma\n");
	printf("3-Carpma\n");
	printf("4-Bolme\n");
	printf("5-Cember Alan Hesabi\n");
	printf("6-Cember Cevre Hasabi\n");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
			printf("\nBirinci sayiyi giriniz:");
			scanf("%d",&s1);
			
			printf("\nIkinci sayiyi giriniz:");
			scanf("%d",&s2);
			
			sonuc=s1+s2;
			printf("\nSonuc= %d",sonuc);
			break;
		
		case 2:
			printf("\nBirinci sayiyi giriniz:");
			scanf("%d",&s1);
			
			printf("\nIkinci sayiyi giriniz:");
			scanf("%d",&s2);
			
			sonuc=s1-s2;
			printf("\nSonuc= %d",sonuc);
			break;
			
			
		case 3:
			printf("\nBirinci sayiyi giriniz:");
			scanf("%d",&s1);
			
			printf("\nIkinci sayiyi giriniz:");
			scanf("%d",&s2);
			
			sonuc=s1*s2;
			printf("\nSonuc= %d",sonuc);
			break;
			
			case 4:
			printf("\nBirinci sayiyi giriniz:");
			scanf("%d",&s1);
			
			printf("\Ikinci sayiyi giriniz:");
			scanf("%d",&s2);
			
			sonuc=s1/s2;
			printf("\nSonuc= %d",sonuc);
			break;
			
		case 5:
			printf("\nYaricapi giriniz:");
			scanf("%d",&r);
			
			sonuc=3*r*r;
			printf("\nSonuc= %d",sonuc);
			break;
			
		case 6:
			printf("\nYaricapi giriniz:");
			scanf("%d",&r);
			
			sonuc=3*2*r;
			printf("\nSonuc= %d",sonuc);
			
			
			
	}
	
	return 0;
}
