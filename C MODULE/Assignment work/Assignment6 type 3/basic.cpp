#include<stdio.h>
void totsalary(int bs)
{
	float da,ta,hra,ts;
	if(bs<=5000)
	{
		da=bs*0.10;
		ta=bs*0.20;
		hra=bs*0.25;
	}
	else
	{
		da=bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;
	}
	ts=bs+da+ta+hra;
	printf("total salary=%.2f \n",ts);
}
int main()
{
	totsalary(6000);
}