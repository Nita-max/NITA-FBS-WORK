#include<stdio.h>
void main()
{
	int n;
	printf("enter number of elements?");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter the elements?");
	for(int i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	printf("even numbers are:");
	for(int i=0;i<n;i++)
	{
     if(arr[i]%2==0)
     {
	   printf("%d",arr[i]);
   	 }
    }
    printf("odd numbers are:");
    for(int i=0;i<n;i++)
    {
    	if(arr[i]%2!=0)
    	{
    		printf("%d",arr[i]);
		}
	}
}