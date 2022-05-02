#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sicaklik;
	
	printf("Su sicakligini giriniz: ");
	scanf("%d",&sicaklik);
	
	if(sicaklik>=0 && sicaklik<=100)
	{
	printf("Su sivi halde");
	}
	
	if(sicaklik<=0)
	{
	printf("Su kati halde");
	}
	
	if(sicaklik>=100)
	{
	printf("Su gaz halde");
	}
	
	
	
	
	return 0;
}
