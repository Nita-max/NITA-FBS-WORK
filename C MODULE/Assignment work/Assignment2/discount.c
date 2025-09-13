#include<stdio.h>
void main()
{
	float price,discount;
	char studyn;
	
	double discounta=price*discount/100;
    double fiprice=price*discounta;

	printf("student or not?");
	scanf("%c",&studyn);
	
	printf("enter price?");
	scanf("%d",&price);
	
	if(studyn=='y')
	{
		if(price>500)
		{
		  discount=0.20;	
		}
		else
		{
			discount=0.10;
		}
    }
		 else if(studyn=='n')
		{
			if(price>600)
			{
			  discount=0.15;	
			}
			else
			{
			  discount=0.0;	
			}
		   
		}
		
		
	}