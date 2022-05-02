#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi;
	
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi%2==0)
	{
	printf("Sayi cift");
	}
	
	else
	{
	printf("Sayi tek");	
	}
	
	return 0;
}
