#include<stdio.h>
void main()
{
   int a=20;
   int* ptr=&a;
   
   printf("size of %u",ptr);
   printf("size of %d",ptr);
   printf("size of %f",ptr);
}
