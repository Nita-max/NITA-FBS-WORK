#include<stdio.h>
void leap(int year)
{
	if(year%4==0)
	{
		printf("year is leap.",year);
	}
	else
	{
		printf("year is not leap.",year);
	}
	int main()
	{
		leap(1997);
	}
	
}
