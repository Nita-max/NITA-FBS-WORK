#include<stdio.h>
void vote(int age)
{
	if(age>=18)
	{
		printf("%d is eligible for vote.",age);
	}
	else
	{
		printf("%d is not eligible for vote.",age);
	}
}
int main()
{
	vote(5);
}