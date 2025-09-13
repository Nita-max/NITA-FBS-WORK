#include<stdio.h>
void vowel(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("is vowel.",ch);
	}
	else
	{
		printf("is not vowel.",ch);
	}
}
void main()
{
	vowel('e');
}