// Program to display net salary
// Date : 05-sep-2023

#include <stdio.h>

void main()
{
 int salary, hra, da, netsalary;

    // Input
    printf("Enter Salary :");
    scanf("%d", &salary);

    hra = salary * 30 / 100;
    da = salary * 20 / 100;

    netsalary = salary + hra + da;

    printf("Basic Salary   : %6d\n", salary);
    printf("HRA            : %6d\n", hra);
    printf("DA             : %6d\n", da);
    printf("Net Salary     : %6d", netsalary);
}
