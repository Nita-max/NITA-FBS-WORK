#include<stdio.h>
void main()
{
  int n,num,temp,rem,digi,sum;
  
  printf("enter the upper limit (n)");
  scanf("%d",&n);
  
  printf("armstrong number from 1 to %d are:\n",n);
  
  for(num=1;num<=n;num++)
  {
  	temp=num;
  	digi=0;
  	
  	while(temp!=0)
  	{
  		temp=temp/10;
  		digi++;
	  }
	  temp=num;
	  sum=0;
	  while(temp!=0)
	  {
	  	rem=temp%10;
	  	sum+=pow(rem,digi);
	  	temp=temp/10;
	  }
	  if(sum==num)
	  {
	  	printf("%d \n",num);
	  }
  }
  
}