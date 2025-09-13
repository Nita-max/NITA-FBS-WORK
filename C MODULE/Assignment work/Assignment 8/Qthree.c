#include<stdio.h>
void main()
{
	int n,sum=0;
	
	printf("enter number of elements?");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter the elements?");
	for(int i=0;i<n;i++)
	{
     	scanf("%d",&arr[i]);
     	sum+=arr[i];//add elements
	}
	
	printf("sum of all numbers is %d \n",sum);
}