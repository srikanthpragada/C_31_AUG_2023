// Program to take 2 numbers and display the largest
// Date : 07-sep-2023

#include <stdio.h>

void main()
{
 int num1, num2;

    printf("Enter two numbers : ");
    scanf("%d%d",&num1, &num2);

    if (num1 > num2)
    {
       printf("%d", num1);
    }
    else
    {
       printf("%d", num2);
    }

}
