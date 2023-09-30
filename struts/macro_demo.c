// Macro Demo

#include <stdio.h>
#define SIZE 10
// Macros
#define max(a, b)  a > b ? a : b
#define iseven(n)  n % 2 == 0


void main()
{
    int a[SIZE];
    int x = 10, y = 5, big;

    big = max(x, y);  // x > y ? x : b

    if(iseven(x))  // if (x % 2 == 0)
         printf("Even");
}
