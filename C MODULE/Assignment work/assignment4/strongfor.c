#include<stdio.h>
void main()
{
	int n,i,temp,digit,sum;
	
	fflush(stdin);
	printf("enter the value of n:");
	scanf("%d",&n);
	
	printf("strong number between 1 and %d are:\n",n);
	
	for(i=1;i<=n;i++)
	{
		temp=i;
		sum=0;
		while(temp!=0)
		{
			digit=temp%10;
			sum+= (digit);
			temp/=10;
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
		
	}
}