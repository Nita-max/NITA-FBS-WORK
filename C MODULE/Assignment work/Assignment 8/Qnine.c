#include<stdio.h>
void main()
{
	int arr[5]={11,12,13,14,15};
	int i,n=5,temp;
	
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	printf("Reversed array:");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
}