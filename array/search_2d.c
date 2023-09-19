// Search in 2d array

#include <stdio.h>

void main()
{
 int a[5][5], i, j, num, found = 0;

    srand(time(0)); // initialize seed

    for(i = 0; i < 5; i ++)
    {
       for(j = 0; j < 5; j ++)
       {
           a[i][j] = rand() % 100;
           printf("%5d", a[i][j]);
       }
       printf("\n");
    }

    printf("\nEnter a number :");
    scanf("%d",&num);

    for(i = 0; i < 5 && !found ; i ++)
    {
       for(j = 0; j < 5; j ++)
       {
          if(a[i][j] == num)  {
            printf("Found at %d, %d", i, j);
            found = 1;
            break;
          }
       }
    }

    if(!found)
        printf("Sorry! Not found!");

}
