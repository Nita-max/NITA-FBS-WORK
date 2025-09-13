#include<stdio.h>
void main()
{
	int num=7,i=2,isprime=1;
	
	while(i<num)
	{
		if(num% i== 0)
		isprime=0;
		i++;
		
	}
	if(isprime && num>1)
	{
		printf("%d is prime \n.",num);
	}
	else
	{
		printf("%d is not prime \n.",num);
	}
	
	
}