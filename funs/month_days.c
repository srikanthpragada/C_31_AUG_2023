// Create a function to return smallest factor

#include <stdio.h>

int month_days(int month, int year)
{
    switch(month)
    {
        case 2:
             if(year % 4 == 0)
                 return(29);
             else
                 return(28);
        case 4:
        case 6:
        case 9:
        case 11: return(30);
        default: return (31);
    }
}

void main()
{
   printf("Days in a month  = %d", month_days(5, 2020));
}
