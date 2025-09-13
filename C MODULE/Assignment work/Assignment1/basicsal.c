#include<stdio.h>
void main()
{
	float bs,da,ta,hra,totsal;
	
	printf("enter basic salary?");
	scanf("%f",&bs);
    
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
		totsal=bs+da+ta+hra;
		printf(" total salary =%.2f \n",totsal);
	
}