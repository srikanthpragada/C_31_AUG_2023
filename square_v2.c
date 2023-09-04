// Program to display square of a number taken from user
// Date : 04-sep-2023

#include <stdio.h>

void main()
{
 int num, square; // variable

    // Input
    printf("Enter a number :");
    scanf("%d", &num);

    // Process
    square = num * num;

    // Output
    printf("Square of %d is %d", num, square);

}
