#include<stdio.h>
void uplow()
{
	char ch;
	printf("enter the character.");
	scanf("%c",&ch);
	
	if(ch>='A'&&ch<='Z')
	{
		printf("character is uppercase.");
	}
	else
	{
		printf("character is lowercase.");
	}
}
int main()
{
	uplow();
}