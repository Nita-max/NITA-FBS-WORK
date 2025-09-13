void main()
{
   int num=28,i=1,sum=0;
   
   while(i<num)
   {
   	if(num%i==0)
   	{
   		sum+=i;
   	}
   	i++;
   }
   	if(sum==num)
   	{
   		printf("%d is perfect number.",num);
   		
	}
	else
	{
		printf("%d is not perfect number.",num);
	}
   	
   	
}	