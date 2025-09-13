#include<stdio.h>
void main()
{
	int arr[10];
	
	printf("enter ten numbers? ");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("alternate elements are:");
	for(int i=0;i<10;i++)
	{
	 if(i%2==0)
	 {
	 	printf("%d",arr[i]);
	 }
	}
		 	
	
}