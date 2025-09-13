void main()
{
	int num=153;
    int originalnum=num;
	int sum=0;
	
	while(num>0)
	{
		int digit=num%10;
		sum+= digit*digit*digit;
		num/=10;
	}
	if(sum==originalnum)
	{
		printf("%d is armstrong number \n",originalnum);
	}
	else
	{
		printf("%d is armstrong number \n.",originalnum);
	}
}