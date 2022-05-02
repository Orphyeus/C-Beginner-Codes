#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float boy,yas,kg,idealkg;
	
	printf("Kilonuzu giriniz: ");
	scanf("%f",&kg);
	
	printf("Boyunuzu giriniz: ");
	scanf("%f",&boy);
	
	printf("Yasinizi giriniz: ");
	scanf("%f",&yas);
	
	idealkg=(boy-100+yas/10)*0.8;
	
	printf("Ideal kilonuz: %f",idealkg);
	
	if(kg>idealkg)
	{printf("\n\nAz ye az");
	}
	
	if(kg=idealkg)
	{printf("\n\nBak suan inandim");
	}
	
	if(kg<idealkg)
	{printf("\n\nFit olcam diye iskelet olma, az ekmek ye ekmek");
	}
	
	printf("\n\nAnket: Kac kg olmak istiyorsunuz?\n");
	scanf("%f",kg);

	return 0;
}
