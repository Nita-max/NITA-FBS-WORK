#include<stdio.h>
void main()
{
  int n,num,i,isprime;
  
  printf("enter the upper limit (n)");
  scanf("%d",&n);
  
  printf("prime number from 1 to %d are \n:",n);
  
  for(num=2;num<=n;num++)
  {
  	isprime=1;
  	for(i=2;i*i<=num;i++)
  	{
  		if(num%i==0)
  		{
  			isprime=0;
  			break;
		}
	}
	if(isprime)
	{
		printf("%d \n",num);
	}
  }
}