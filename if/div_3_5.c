// Program to display number is divisible by 3 and 5
// Date : 09-sep-2023

#include <stdio.h>

void main()
{
 int num;

    printf("Enter Number : ");
    scanf("%d",&num);

    if(num % 3 == 0)
    {
        if(num % 5 == 0)
           printf("3 and 5");
        else
           printf("3");
    }
    else
    {
        if(num % 5 == 0)
           printf("5");
        else
           printf("None");
    }
}
