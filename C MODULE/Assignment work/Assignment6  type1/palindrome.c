#include<stdio.h>
void palin()
{
	int num=151,rev,no1,no2,no3;
	no1=num%10;
	no2=(num/10)%10;
	no3=num%10;
	
	rev=no3*100+no2*10+no1;
	
	if(rev==num)
	{
		printf("%d is palindrome number.",num);
	}
	else
	{
		printf("%d is not palindrome number.",num);
	}
}
int main()
{
	palin();
}