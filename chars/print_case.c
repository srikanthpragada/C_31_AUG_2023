// Print char case
#include <stdio.h>


void main()
{
  char ch;

    printf("Enter char :");
    ch = getche();

    if(ch >= 65 && ch <= 90)
        printf("\nUppercase");
    else
        printf("\nLowercase");
}
