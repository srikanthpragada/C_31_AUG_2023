// Print avg of positive numbers
#include <stdio.h>

void main()
{
 int i, num, total = 0, count = 0;

    while(1)
    {
       printf("Enter number [0 to stop]:");
       scanf("%d",&num);

       if (num == 0)
           break;


       if (num < 0)
           continue;


       total += num;
       count ++;
    }
    printf("Avg = %d", total / count);
}
