#include<stdio.h>
void main()
{
	int num1,num2;
	char operat;
	
	printf("enter two number?");
	scanf("%d %d",&num1,&num2);
	
	printf("enter operater (+,-,*,/,%%)");
	scanf("%c",&operat);
	
	if(operat=='+')
	{
		printf("result %d \n",num1+num2);
	}
	else if(operat=='-')
	{
		printf("result %d \n",num1-num2);
	}
	else if(operat=='*')
	{
		printf("result %d \n",num1*num2);
	}
	else if(operat=='/')
	{
	 if	(num2!=0)
	 {
	 	printf("result %d \n",num1/num2);
	 }
	 else if(operat='%')
	 {
	 	printf("result %d \n",num1%num2);
	 }
	 else
	 {
	 	printf("invalid operater");
	 }	
	}
}
