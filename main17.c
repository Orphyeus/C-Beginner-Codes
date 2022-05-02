#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int x;
	
	printf("Please enter a integer:\n");
	scanf("%d",&x);
	
	while(x<=50)
	{
	printf("\nPlease insert an acceptable number\n");
    printf("Please enter a integer:\n");
    scanf("%d",&x);
	}
    
	
	return 0;
}
