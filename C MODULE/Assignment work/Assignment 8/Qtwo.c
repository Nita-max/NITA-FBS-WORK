#include<stdio.h>
void main()
{
	int n,target,found=0;
	printf("enter the number of elements?");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("enter the element:\n ");
	for(int i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);
    }
    
    printf("enter the number to search:");
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {
    	if(arr[i]==target)
    	{
    		found=1;
    		printf("number %d found at index %d.\n",target,i);
    		break;
		}
	}
	if(n!=found)
	{
		printf("number %d not found in the array.\n",target);
	}
}