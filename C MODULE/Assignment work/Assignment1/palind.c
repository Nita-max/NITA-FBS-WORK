void main()
{
	int num=161;
	int no1,no2,no3;
	int rev;
	
	no1=num/100;
	no2=(num/10)%10;
	no3=num%10;
	
	rev=no3*100+no2*10+no1;

	if(rev==num)
	{
		printf("number is palindrome",rev,num);
	}
	else
	{
    	printf("number is not palindrome",rev,num);
	}
}