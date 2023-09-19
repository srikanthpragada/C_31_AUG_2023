// Store marks of 5 students in 3 subjects

#include <stdio.h>

void main()
{
 int marks[5][3], i, j;

    srand(time(0)); // initialize seed

    for(i = 0; i < 5; i ++)
    {
       for(j = 0; j < 3; j ++)
       {
           marks[i][j] = rand() % 100;
           printf("%5d", marks[i][j]);
       }

       printf("\n");
    }

}
