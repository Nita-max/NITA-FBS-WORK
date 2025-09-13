#include<stdio.h>
void main()
{
	int age,salary;
	
	printf("enter the age?");
	scanf("%d",&age);
	
	printf("enter the salary?");
	scanf("%d",&salary);
	
	if(age>=21&& salary>=25000)
	{
		printf("the person is eligible for loan.");
	}
	else
	{
		printf("the person is not eligible for loan.");
	}
}