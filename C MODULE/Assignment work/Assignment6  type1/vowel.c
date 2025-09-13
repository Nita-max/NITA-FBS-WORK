#include<stdio.h>
void vowel()
{
	char ch;
	printf("enter the character.",&ch);
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("%c is vowel.",ch);
	}
	else
	{
		printf("%c is consonant.",ch);
	}
}
int main()
{
	vowel();
}