// Create a function to draw line

#include <stdio.h>

// Defining function
void line(int len)
{
 int i;

    for(i = 1; i <= len; i++ )
        putch('*');
}

void main()
{
     line(20);
     printf("\nSrikanth Technologies\n");
     line(30);
}
