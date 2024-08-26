// 20. Write a C program for calculation of a^b.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter the two numbers a and b \n");
    scanf("%d\n%d", &a, &b);
    c = pow(a, b);
    printf("a raised to the power b is equal to %d", c);
    return 0;
}