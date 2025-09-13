#include<stdio.h>
void main()
{
	int arr[5]={5,2,4,3,6};
	int n=5,i,j,temp;
	
	for(i=0;i<n;i++)
	{
	 for(j=i+1;j<n;j++)
	 {
	 	if(arr[i]>arr[j])
	 	{
	 		temp=arr[i];
	 		arr[i]=arr[j];
	 		arr[j]=temp;
		}
  	 }	
	}
	printf("sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}