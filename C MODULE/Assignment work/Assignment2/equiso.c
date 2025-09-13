void main()
{
	int s1,s2,s3;
	
	printf("enter first side of triangle.");
	scanf("%d",&s1);
	
	printf("enter second side of triangle.");
	scanf("%d",&s2);
	
	printf("enter third side of triangle.");
	scanf("%d",&s3);
	
	if(s1+s2 >s3&& s1+s3>s2&& s2+s3>s1)
	{
	 if(s1==s2&&s2==s3)
	 {
	 	printf("triangle is equilateral.\n");
	 }	
	 else if(s1==s2|| s1==s3 || s2==s3)
	 {
	 	printf("triangle is isosceles.\n");
	 }
	 else
	 {
	 	printf(" the triangle is scalene.\n");
	 }
    }
    else
    {
    	printf("no valid triangle.\n");
	}
}
	
	
	
	