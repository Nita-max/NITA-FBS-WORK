#include<stdio.h>
void main()
{
	int num,choice,i,rev,temp,sum ,p,count;
	printf("enter a number:");
	scanf("%d",&num);
	
	printf("\n menu:");
	printf("1.check the number is even or odd.\n");
	printf("2.chechk the number is prime or not.\n");
	printf("3.check the number is palindrome or not.\n");
	printf("4.check number is positive or negative or zero.\n");
	printf("5.reverse the number.\n");
	printf("6.find the sum of digits.\n");
	
	printf("enter the choice");
	scanf("%d",&choice);
	//using if else
	if(choice==1)
	{
		//even odd
		if(num%2==0)
		{
			printf("%d is even",num);
		}
		else
		 printf("%d is odd",num);
	}
	else if(choice==2)
	{
	   // prime or not
	   count=0;
	   for(i=1;i<=num;i++)
	   {
	   	if(num%i==0)
	   	count++;
	   }
	   if(count==2)
	   printf("%d is prime\n",num);
	   else
	   
	   	printf("%d is not prime\n",num);
      }
	   
	   else if(choice==3)
	   {
	   	//palindrome or not
	   	rev=0;
	   	temp=num;
	   	while(temp>0)
	   	{
	   		p=temp%10;
	   		rev=rev*10+p;
	   		temp=temp/10;
		}
		if(rev==num)
		printf("%d is palindrome\n",num);
		else
		printf("%d is not palindrome\n",num);
	   }
	   else if(choice==4)
	   {
	   	// positive negative or zero
	   	if(num>0)
	   	printf("%d is positive\n",num);
	   	else if(num<0)
	   	printf("%d is negative\n",num);
	   	else
	   	printf("number is zero",num);
	   	
	   }
	   else if(choice==5)
	   {
	   	// reverse number
	   	rev=0;
	   	temp=num;
	   	while(temp>0)
	   	{
	   	rev=0;
	   	temp=rev*10+p;
	   	temp=temp/10;
	    }
	     printf("reverse of %d is %d\n",num,rev);
       }
       else if(choice==6)
       {
       	//sum of digits
       	sum=0;
       	temp=num;
       	while(temp>0)
       	{
       		p=temp%10;
       		sum=sum+p;
       		temp=temp/10;
       		
		}
		 printf("sum of digits of %d is %d \n",num,sum);
	   }
	   	else
	   	{
	   		printf("invalid choice\n");
		}
		
	}
	
