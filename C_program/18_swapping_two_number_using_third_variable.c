// 19 Write a C program for swapping of two number without using third variable

#include <stdio.h>

int main()
{
int a,b,c;

printf("Enter the two numbers \n");
scanf("%d\n%d",&a,&b);

c=a;
a=b;
b=c;

printf("numbers after swaping %d and %d",a,b);
return 0;
}