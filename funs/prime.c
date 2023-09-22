// Create a function to return whether a number is prime

#include <stdio.h>

int isprime(int num)
{
 int i;

    for(i = 2; i <= num/2 ; i ++)
    {
        if (num % i == 0)
          return 0; // false
    }

    return 1; // true
}

void main()
{
  int nums [] = {19, 237, 453, 121, 983};
  int i;

    for(i = 0; i < 5; i ++)
    {
        printf("\n%5d ", nums[i]);
        if (isprime(nums[i]))
            printf(" Prime");
        else
            printf(" Not Prime");
    }
}
