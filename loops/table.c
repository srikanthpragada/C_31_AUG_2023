// Print a table for the given number
#include <stdio.h>


void main()
{
 int i, num;

    printf("Enter a number :");
    scanf("%d",&num);


    for(i = 1; i <= 10 ; i ++)
    {
       printf("%3d * %2d = %5d\n", num, i, num * i);
    }


}
