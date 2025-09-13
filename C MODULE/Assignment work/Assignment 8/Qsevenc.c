#include<stdio.h>
void main()
{
	int arr[3]={2,4,6};
	int brr[3]={3,6,9};
	int crr[3];
	
	printf("addition of two array\n ");
	for(int i=0;i<3;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	printf("addition is crr[i]=");
	for(int i=0;i<3;i++)
	{
		printf(" %d ",crr[i]);
	}
}