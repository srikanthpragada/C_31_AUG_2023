// Pointer Demo

#include <stdio.h>

void main()
{
  int n = 10;
  int * p;

      p = &n;
      printf("%d  %d", n, *p);
      *p = 20;
      printf("%d  %d", n, *p);

}
