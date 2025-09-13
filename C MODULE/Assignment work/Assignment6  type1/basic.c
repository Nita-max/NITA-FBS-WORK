#include<stdio.h>
void totsal()
{
	float bs,da,ta,hra,ts;
	printf("enter basic salary?");
	scanf("%f",&bs);
	
	if(bs<=5000)
	{
		bs=da*0.10;
		bs=ta*0.20;
		bs=hra*0.25;
	}
	else
	{
		bs=da*0.15;
		bs=ta*0.25;
		bs=hra*0.30;
	}
	ts=bs+da+ta+hra;
	printf("total salary=%.2f\n",ts);
}