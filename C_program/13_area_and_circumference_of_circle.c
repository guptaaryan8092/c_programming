//13. Write a C program for calculation of area and circumference of circle.//
#include <stdio.h>
int main()
{
float r,C,A;
printf("Enter the radius of circle \n");
scanf("%f",&r);
A=(r*r)*22/7;
C=2*r*22/7;
printf("The area of circle is %f \n",A);
printf("The circumfrence of circle is %f",C);
return 0;
}