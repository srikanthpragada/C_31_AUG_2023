#include <stdio.h>


void main()
{
 int i, n, total = 0;

    printf("Enter a number :");
    scanf("%d",&n);


    for(i = 1; i <= n ; i ++)
    {
       total += i;
    }

    printf("Total = %d", total);
}
