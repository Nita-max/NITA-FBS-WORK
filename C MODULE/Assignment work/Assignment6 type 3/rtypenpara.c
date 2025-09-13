#include<stdio.h>
int evenodd()
{
	int no;
	printf("enter the number?");
	scanf("%d",&no);
	
	if(no%2==0)
	{
		printf("number is even",no);
	}
	else
	{
		printf("number is odd");
	}
}
int main()
{
	evenodd();
	return 0;
}