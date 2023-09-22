// Create a function to return whether a number is prime

#include <stdio.h>

int next_even(int num)
{
   if(num % 2 == 0)
     return num + 2;
   else
     return num + 1;
}

main()
{
   printf("Next even =  %d", next_even(15));
}



