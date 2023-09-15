// Create an array and store squares of 1 to 10 in array
#include <stdio.h>

void main()
{
 int squares[10], i;

    // Fill array with squares
    for(i = 0; i < 10; i ++)
    {
       squares[i] = i * i;
    }

    // Print array
    for(i = 0; i < 10; i ++)
    {
       printf("%5d", squares[i]);
    }


}
