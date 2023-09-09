// Program to display number of days in the given month
// Date : 09-sep-2023

#include <stdio.h>

void main()
{
 int month, year;

    printf("Enter Month : ");
    scanf("%d",&month);

    if (month == 2)
    {
      printf("Enter year :");
      scanf("%d",&year);

      if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
           printf("29");
      else
           printf("28");
    }

    else
        if(month == 4 || month == 6 || month == 9 || month == 11)
            printf("30");
        else
            printf("31");
}
