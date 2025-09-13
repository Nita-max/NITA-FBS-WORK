#include<stdio.h>
void leap()
{
	int year;
	
	printf("enter the year?");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("%d is leap year",year);
	}
	else
	{
		printf("%d is not leap year.",year);
	}
}
int main()
{
	leap();
}