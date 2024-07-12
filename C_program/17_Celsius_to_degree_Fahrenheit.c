//17 Write a C program to convert degree Celsius to degree Fahrenheit.
#include <stdio.h>
int main()
{
float c,f;
printf("Enter the temperature in degree celcius \n");
scanf("%f",&c);
f=(c*9/5)+32;
printf("The temperature in fahrenheit %f",f);
return 0;
}