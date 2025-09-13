#include<stdio.h>
void main()
{
	int n=5,i;
	int fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is :%d.",n,fact);
}