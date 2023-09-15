// Print Smallest factor for the given number
#include <stdio.h>

void main()
{
 int i,num, sf;

    printf("Enter number :");
    scanf("%d",&num);

    sf = num;
    for(i = 2; i <= num/2; i ++)
    {
       if(num % i == 0)
       {
          sf = i;
          break;
       }
    }

    printf("Smallest Factor = %d", sf);
}
