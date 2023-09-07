// Program to take 3 numbers and display whether all of them are equal
// Date : 07-sep-2023

#include <stdio.h>

void main()
{
 int num1, num2, num3;

    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&num1, &num2, &num3);

    if (num1 == num2 && num1 == num3)
       printf("Equal");
    else
       printf("Not Equal");

}
