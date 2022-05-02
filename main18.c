#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int f,s;
	
	printf("Sayi giriniz:");
	scanf("%d",&s);
	
	f=1;
	
	while(s>1)
	{
    f=f*s;
    s--;
	}
	printf(" Sonuc: %d",f);
	
	return 0;
}
