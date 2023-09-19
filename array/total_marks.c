// Store marks of 5 students in 3 subjects
// And display total marks for each student

#include <stdio.h>

void main()
{
 int marks[5][3], i, j, total = 0;

    srand(time(0)); // initialize seed

    for(i = 0; i < 5; i ++)
    {
       total = 0;
       for(j = 0; j < 3; j ++)
       {
           marks[i][j] = rand() % 100;
           total += marks[i][j];
           printf("%5d", marks[i][j]);
       }

       printf("%5d\n", total);
    }

}
