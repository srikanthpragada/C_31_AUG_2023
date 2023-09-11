#include <stdio.h>


void main()
{
 int n;

    for(n = 100; n <= 200 ; n ++)
    {
       if(n % 3 == 0 || n % 5 == 0)
           printf("%d ", n);
    }


}
