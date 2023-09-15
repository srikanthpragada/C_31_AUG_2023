// Create an array and fill it with random numbers
#include <stdio.h>

void main()
{
 int a[10], i;


    srand(time(0)); // initialize seed

    for(i = 0; i < 10; i ++)
    {
       a[i] = rand() % 100; // 0 - 99
       printf("%5d", a[i]);
    }

}
