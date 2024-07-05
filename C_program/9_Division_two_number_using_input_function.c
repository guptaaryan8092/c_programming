//9. Write a C program for Division of two number using input function.//
#include <stdio.h>
int main()
{
float a,b,c;
printf("Enter the dividend and the divisor \n");
scanf("%f\n%f",&a,&b);
c=a/b;
printf("The division of two numbers is %f",c);
return 0;
}