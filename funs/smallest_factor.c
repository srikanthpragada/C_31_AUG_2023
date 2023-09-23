// Create a function to return smallest factor

#include <stdio.h>

int smallest_factor(int num)
{
 int i;

    for(i = 2; i <= num/2 ; i ++)
    {
        if (num % i == 0)
          return i;
    }

    return num;
}

void main()
{
   printf("Smallest factor = %d", smallest_factor(127));
}
