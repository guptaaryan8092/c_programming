//Write a C program for Subtraction of two number using input function.//
#include <stdio.h>
int main()
{
int a,b,c;
printf("enter the two numbers\n");
scanf("%d\n%d",&a,&b);
c=a-b;
printf("The difference of two numbers is %d",c);
return 0;
}