// 21. Write a C program for calculation of area of triangle using heron's formula.

#include <stdio.h>
#include <math.h>
int main()
{

    float a, b, c, s, A;
    printf("Enter the sides of triangle a,b,c \n");
    scanf("%f\n%f\n%f", &a, &b, &c);

    s = (a + b + c) / 2;
    A = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("the area of triangle with the help herons formula is %f", A);

    return 0;
}