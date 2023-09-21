// Create a function to print a table

#include <stdio.h>

void print_table(int num)
{
  int i;

     for(i = 1; i <= 10; i ++)
        printf("%2d * %2d = %4d\n",num, i, num * i);
}

void main()
{
    print_table(15);
    print_table(11);
}
