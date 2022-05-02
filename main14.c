#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// 1 saat 7 lira; 1-2 saat 9 lira; 3-4 saat 11 lira; 
	//4-5 saat 13 lira; 5-6 saat 15 lira; 6-7 saat 17 lira; 
	//7-8 saat 19 lira; 24 saat 23 lira.
	
	int h,tutar;
	
	printf("Altay Otoparka Hoþgeldiniz :)\n");
	printf("\nKac saat kalacaginizi giriniz: ");
	scanf("%d",&h);
	
	if(h==1)
	{
	tutar=7;
	printf("\nTutar: %dTL",tutar);
	}
	
	if(1<h && h<3)
	{
	tutar=9;
	printf("\nTutar: %fTL",tutar);
	}

	if(3<=h && h<4)
	{
	tutar=11;
	printf("\nTutar: %dTL",tutar);
	}
	
	if(4<=h && h<5)
	{
	tutar=13;
	printf("\nTutar: %dTL",tutar);
	}
	
	if(5<=h && h<6)
	{
	tutar=15;
	printf("\nTutar: %dTL",tutar);
	}
	
	if(6<=h && h<7)
	{
	tutar=17;
	printf("\nTutar: %dTL",tutar);
	}
	
	if(7<=h && h<8)
	{
	tutar=19;
	printf("\nTutar: %dTL",tutar);
	}
	
	if(8<=h && h<=24)
	{
	tutar=23;
	printf("\nTutar: %dTL",tutar);
	}
	
	return 0;
}
