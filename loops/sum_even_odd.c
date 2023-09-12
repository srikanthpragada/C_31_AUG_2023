// Print sum of even and odd numbers between 1 and 50
#include <stdio.h>


void main()
{
 int i, sum_even = 0, sum_odd = 0;


    for(i = 1; i <= 50 ; i ++)
    {
       if(i % 2 == 0)
          sum_even += i;
       else
          sum_odd += i;
    }

    printf("Even sum = %d, Odd Sum = %d", sum_even, sum_odd);

}
