// Pointer Demo

#include <stdio.h>

void main()
{
  int n = 10;
  int * p;
  double * dp;

      printf("%d  %d  %d\n", sizeof(n), sizeof(p), sizeof(dp));

      p = &n;
      printf("%d  %d\n", n, *p);
      *p = 20;
      printf("%d  %d\n", n, *p);

}
