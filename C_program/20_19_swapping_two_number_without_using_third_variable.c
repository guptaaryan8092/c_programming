#include <stdio.h>
int main()
{
int a,b;
printf("Enter the two numbers \n");
scanf("%d\n%d",&a,&b);
a=a-b;
b=a+b;
a=b-a;
printf("numbers after swaping %d and %d",a,b);
return 0;
}