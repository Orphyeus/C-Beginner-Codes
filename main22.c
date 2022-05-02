#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char sehir[1][5];
	int i;				
	
	for(i=0;i<3;i++)
	{
		printf("Sehir Giriniz:");
		scanf("%s",sehir[i]);
		
		printf("Girdiginiz Sehir: %s",sehir[i]);
		printf("\n\n");
		
	}
	
	for (i=0;i<3;i++)
	{
		printf("%s ",sehir[i]);
	}
	
	return 0;
}
