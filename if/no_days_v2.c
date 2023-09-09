// Program to display number of days in the given month using switch
// Date : 09-sep-2023

#include <stdio.h>

void main()
{
 int month, year;

    printf("Enter Month : ");
    scanf("%d",&month);

    switch(month)
    {
        case 2: printf("28");
                break;
        case 4:
        case 6:
        case 9:
        case 11: printf("30");
                 break;
        default:
                 printf("31");
    }
}
