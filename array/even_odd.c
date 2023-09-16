// Create an array and fill it with random numbers and display even numbers first
// then odd numbers

#include <stdio.h>

void main()
{
 int a[10], i;


    srand(time(0)); // initialize seed

    for(i = 0; i < 10; i ++)
    {
       a[i] = rand() % 100; // 0 - 99
    }

    // Print even numbers
    for(i = 0; i < 10; i ++)
    {
       if(a[i] % 2 == 0)
          printf("%d ", a[i]);
    }

    // Print odd numbers
    for(i = 0; i < 10; i ++)
    {
       if( a[i] % 2 != 0)
          printf("%d ", a[i]);
    }

}
