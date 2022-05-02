#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int j,k,l;
	
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&k);
	
	printf("\nIkinci sayiyi giriniz: ");
	scanf("%d",&l);
	
	for(j=k;j<=l;j+=2)
	{
	printf("\n%d",j);
	}
	
	return 0;
}
