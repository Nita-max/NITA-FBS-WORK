void main()
{
	int num=121,rem;
	int rev=0;
	int temp=num;
	
	while(temp>0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	if(num==rev)
	{
		printf("%d number is palindrome number \n.",num);
	}
	else
	{
		printf("%d is not palindrome number \n.",num);
	}
}