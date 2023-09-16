// Create an array, fill it with random numbers, take input from user
// and display numbers bigger than the given number

#include <stdio.h>

void main()
{
 int a[10], i, num;


    srand(time(0)); // initialize seed

    for(i = 0; i < 10; i ++)
    {
       a[i] = rand() % 100; // 0 - 99
       printf("%5d", a[i]);
    }

    printf("\nEnter number :");
    scanf("%d",&num);

    // Print numbers biggger than taken num
    for(i = 0; i < 10; i ++)
    {
       if(a[i] > num)
          printf("%d ", a[i]);
    }

}
