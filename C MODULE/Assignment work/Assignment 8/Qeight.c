#include<stdio.h>
void main()
{
	int n;
	int arr[5]={3,6,9,12,15};
	int brr[5]={4,8,12,16,20};
	int n1=5,n2=5;
	int crr[10];//size of n1 and n2.
	
	for(int i=0;i<n1;i++)
	{
		crr[i]=arr[i];
	}
	//copy elements of array 2.
	for(int i=0;i<n2;i++)
	{
		crr[n1+i]=brr[i];
	}
	//merged array.
	printf("merged array is :\n");
	for(int i=0;i<n1+n2;i++)
	{
		printf(" %d",crr[i]);
	}
	
}