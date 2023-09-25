// Pass by reference/address

#include <stdio.h>

void zero(int * p)
{
    *p = 0;
}

void main()
{
 int v = 100;


      zero(&v);  // pass by address
      printf("%d ", v);
}
