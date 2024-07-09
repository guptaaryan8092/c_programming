//15. Write a C program for calculation of volume and surface area of cone.//
#include <stdio.h>
#include <math.h>
int main()
{
float r,h,l,v,a;
printf("Enter the radius and height of cone \n");
scanf("%f\n%f",&r,&h);
l=sqrt(r*r+h*h);
a=r*(l+r)*22/7;
v=(r*r*h)*22/21;
printf("The volume of cone is %f\n",v);
printf("The TSA of cone is %f",a);
return 0;
}