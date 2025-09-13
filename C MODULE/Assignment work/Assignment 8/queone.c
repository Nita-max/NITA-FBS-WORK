#include<stdio.h>
void main()
{
	int n;
	
	printf("enter numbers of elements?");
    scanf("%d",&n);
    
    int arr[n];
    printf("enter the elements?");
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	int min=arr[0];
	int max=arr[0];
	
	for(int i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("minimun number is:%d \n",min);
	printf("maximum number is:%d \n",max);
}