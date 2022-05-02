#include <stdio.h>

int main() {
	
int min=1000,max=0,total,t=0,f=0,i,num,sum;
float net;
	printf("Enter the number of students:");
	scanf("%d" ,&num);
 
 while(num <= 0)
  {
  printf("! ERROR: The number of students must be positive !\n");
  printf("Enter the number of students:");
  scanf("%d" ,&num); 
  }
    
 for(i=1 ; i<= num ;i++)
 { 
    printf("Enter the number of correct and wrong answers for %d student: ",i);
    scanf("%d %d",&t,&f);
    
    sum = t + f;
 }
    
    if(sum > 100)
    {
	while (sum > 100)
    {sum=0;
	printf("! ERROR: The sum of correct and wrong answers cannot exceed 100 !\n");
    printf("Enter the number of correct and wrong answers for %d student: ",i);
    scanf("%d %d",&t,&f);
    
    sum = t + f;}
    }
    
	else 
   {
  	if(min > f)
  	min = f;
  	if(max < t)
  	max = t;
   } 
  
  
 net = max - (min / 4.000); 
 printf("---------------------------\n");
 printf("Maximum True Answer Number is %d\n" ,max);
 printf("Minimum False Answer Number is %d\n" ,min);
 printf("Highest Net is %f\n" ,net);
 printf("---------------------------");

	return 0;
}
