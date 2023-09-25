// Pointer Demo

#include <stdio.h>

void zero(int n)
{
    n = 0;
}

void main()
{
 int v = 100;


      zero(v);  // pass by value
      printf("%d ", v);
}
