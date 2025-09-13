#include<stdio.h>
void main()
{
	int arr[10];
	int n,isprime;
	
	printf("enter ten numbers?");
	for(int i=0;i<10;i++)
	{
	 scanf("%d",&arr[i]);
    }
	
	printf("prime numbers are:");
	for(int i=0;i<10;i++)
	{
      n=arr[i];
	  if(n<=1)
	 	continue;
	 	isprime=1;
	for(int j=2;j<=n/2;j++)
	{
	if(n%j==0)
		{
	      isprime=0;
		}
		break;
		
	}
	if(isprime)
	{
		printf("%d",n);
	}
}
}