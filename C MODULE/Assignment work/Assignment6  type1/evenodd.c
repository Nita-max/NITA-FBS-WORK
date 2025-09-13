#include<stdio.h>
void evenodd()
{
	int no;
	printf("enter the number?");
	scanf("%d",&no);// accepting the value.
	
	if(no%2==0)
	{
		printf("%d is even.",no);
	}
	else
	{
		printf("%d is odd.",no);
	}
}
int main()
{
	evenodd();
}