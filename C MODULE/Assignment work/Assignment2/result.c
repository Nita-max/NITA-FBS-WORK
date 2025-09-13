void main()
{
	int marks;
	
	printf("enter marks?");
	scanf("%d",&marks);
		
	if(marks>75)
	{
		printf("result is distinction");
	}
	else if( marks>65)
	{
		printf("result is first class.");
	}
	else if(marks>55)
	{
		printf("result is second class.");
	}
	else if(marks>40)
	{
		printf("result is pass");
	}
	else
	{
		printf("fail");
	}
}