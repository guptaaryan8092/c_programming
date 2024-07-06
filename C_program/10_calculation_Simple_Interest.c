//Write a C program for calculation of Simple Interest.//
#include <stdio.h>
int main()
{
int p,t;
float r,SI;
printf("Enter the principle amount, rate of interest and time for calculating simple interest \n");
scanf("%d\n%f\n%d",&p,&r,&t);
SI=(p*r*t)/100;
printf("The Simple Interest is %f",SI);
return 0;
}