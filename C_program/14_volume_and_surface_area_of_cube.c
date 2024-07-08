//14. Write a C program for calculation of volume and surface area of cube.
#include <stdio.h>
int main()
{
int S,V,A;
printf("Enter the side of cube \n");
scanf("%d",&S);
V=S*S*S;
A=6*S*S;
printf("The volume of cube is %d\n",V);
printf("The TSA of cube is %d",A);
return 0;
}