
#include<stdio.h>
void main()
{
	int age;
	char child,teen,adult,senior;
	
	fflush(stdin);
	
	printf("enter the age?");
	scanf("%d",&age);
	
	if(age<12)
	{
		printf("person is child.",child);
	}
	else if(age>=12&& age<=19)
	{
		printf("perosn is teenager.",teen);
	}
	else if(age>=20 && age<=59)
	{
		printf("person is adult.",adult);
	}
	else if(age>=60)
	{
		printf("person is senoir.",senior);
	}
	else
	{
		printf("invalid input.");
	}
}
	 