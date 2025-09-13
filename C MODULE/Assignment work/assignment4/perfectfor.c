#include<stdio.h>
void main()
{
	int num,sum;
      
	printf("enter the number:");
	scanf("%d",num);
	
	fflush(stdin);
	printf("perfect number between 1 and %d are:",num);
	
	for(int i=1;i=num/2;i++)
	{
	 if(num%i==0)
	 {
	 	sum+=i;
	 }	
	}
	if(sum==num)
	{
		printf("%d \n",num);
	}
	
	
  
}