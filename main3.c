#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int bagaj,el,tutar;
	
	printf("Bagaj kg giriniz:");
	scanf("%d",&bagaj);
	
	printf("El kg giriniz:");
	scanf("%d",&el);
	
	tutar=((bagaj+el-23)*5);
	
	printf("Tutar %d",tutar);
	printf(" Tl...");
	
	return 0;
}
