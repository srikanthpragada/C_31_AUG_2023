#include <stdio.h>

int n = 1000; // global

void f()
{
  int v = 10, n = 1;   // local

    printf("%d %d",v, n);
}

void main()
{
  int a = 100; // local

   printf("%d %d ",a, n);
   f();
}

