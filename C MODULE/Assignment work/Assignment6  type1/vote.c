#include<stdio.h>
void vote()
{
	int age;
	printf("enter the age?");
	scanf("%d",&age);
	
	if(age>18)
	{
		printf("person is eligible.");
	}
	else
	{
		printf("person is not eligible.");
	}
}
int main()
{
	vote();
}