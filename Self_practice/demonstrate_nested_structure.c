#include <stdio.h>
#include <string.h>
struct Company
{
char company_name[20];
char company_number[20];
struct Employee
{
int employee_id;
char name[20];
int salary;
} e;
};
int main()
{
struct Company cp;
printf("The size of organisation : %ld\n",
sizeof(cp));
cp.e.employee_id = 145;
strcpy(cp.e.name, "User");
cp.e.salary = 600000;
strcpy(cp.company_name,
"GOOGLE");
strcpy(cp.company_number, "GL92236");
printf("Organisation Name : %s\n", cp.company_name);
printf("Organisation Number : %s\n", cp.company_number);
printf("Employee id : %d\n", cp.e.employee_id);
printf("Employee name : %s\n", cp.e.name);
printf("Employee Salary : %d\n", cp.e.salary);
}