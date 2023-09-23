#include <stdio.h>


// Function declaration or Prototype declaration
float average(int, int);

void main()
{
   printf("%f", average(10, 15));
}

// Function definition
float average(int a, int b)
{
    return (a + b) / 2.0;
}
