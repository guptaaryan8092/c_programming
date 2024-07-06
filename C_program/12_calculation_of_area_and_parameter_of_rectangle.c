//12 Write a C program for calculation of area and parameter of rectangle.//
#include <stdio.h>
int main()
{
int l,b,A,P;
printf("Enter the length and breadth of rectangle \n");
scanf("%d\n%d",&l,&b);
A=l*b;
P=2*(l+b);
printf("The area of rectangle is %d \n",A);
printf("The perimeter of rectangle is %d",P);
return 0;
}