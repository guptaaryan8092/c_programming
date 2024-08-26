// 22. Write a C program to calculate the total salary where HRA=40% of basic salary and DA=20% of basic salary.

#include <stdio.h>
int main()
{
    int a, s;
    printf("Enter the salary of the employee \n");
    scanf("%d", &a);
    s = a + (a * 2 / 5) + (a / 5);
    printf("Total salary is %d", s);
    return 0;
}
