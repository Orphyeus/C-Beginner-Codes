#include <stdio.h>
#include <stdlib.h>


int main() {
	
	//türkce puan= 1.999
	//matematik puan= 3.998
	//sosyal puan = 1
	//fen puan= 2.999
	//taban puan= 100.160
	
	float t,m,s,f,taban,toplam_puan;
	
	printf("Turkce netinizi giriniz: ");
	scanf("%f",&t);
	
	printf("Matematik netinizi giriniz: ");
	scanf("%f",&m);
	
	printf("Sosyal netinizi giriniz: ");
	scanf("%f",&s);
	
	printf("Fen netinizi giriniz: ");
	scanf("%f",&f);
	
	taban=100.160;
	toplam_puan=t*1.999+m*3.998+s*1+f*2.999+taban;
	
	printf("Puan: %f",toplam_puan);
	
	return 0;
}
