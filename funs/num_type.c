// Create a function to draw line

#include <stdio.h>

void print_type(int num)
{
  if(num % 2 == 0)
    puts("Even");
  else
    puts("Odd");
}

void main()
{
     print_type(10);
     print_type(11);
}
