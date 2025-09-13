void main()
{
	int num=12345;
	int ld,fd;
	ld=num%10;
	
	while(num>=10)
	{
		num/=10;
    }
    fd=num;
    int sum=fd+ld;
	
	printf("sum of digits is %d. \n",sum);
		

}