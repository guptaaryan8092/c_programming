//11. Write a C program for calculation of area of triangle. //
#include <stdio.h>
int main()
{
int b,h,A;
printf("Enter the base and height of triangle \n");
scanf("%d\n%d",&b,&h);
A=(b*h)/2;
printf("The area of triangle is %d",A);
return 0;
}