//7. Write a C program for Multiplication of two number using input function.//
#include <stdio.h>
int main()
{
float a,b,c;
printf("Enter the two numbers \n");
scanf("%f\n%f",&a,&b);
c=a*b;
printf("The multiplication of two numbers is %f",c);
return 0;
}