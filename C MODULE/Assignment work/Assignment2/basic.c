void main()
{
	float da,ta,hra,totsal;
    double	bs=7000;
	if(bs<5000)
	{
		da=bs*0.10;
		ta=bs*0.15;
		hra=bs*0.20;
		printf("%f total salary \n.",totsal);
	}
	else
	{
		totsal=bs+da+ta+hra;
		printf("%f total salary \n",totsal);
	}
}