//16 Write a C program for calculation of average of physics, chemistry, math, English.//
#include <stdio.h>
#include <math.h>
int main()
{
float p,c,m,e,a;
printf("Enter the marks of physics, chemistry, maths, english \n");
scanf("%f\n%f\n%f\n%f",&p,&c,&m,&e);
a=(p+c+m+e)/4;
printf("The average is %f\n",a);
return 0;
}