#include<stdio.h>
void main()
{
	int num;
	
	fflush(stdin);
	
	printf("enter the number?");
	scanf("%d",&num);
	 
	if(num%3==0&&num%5!=0)
	{
	    printf("number is divisible by 3 but not by 5.",num);	
    }
    else if(num%3!=0 && num%5==0)
    {
    	printf("%d is divisible by 5 but not by 3 \n",num);
	}
	else if(num%3==0&& num%5==0)
	{
		printf("%d is divisible by both \n",num);
	}
	else
	{
		printf("%d divisible by none \n",num);
	}
	
}