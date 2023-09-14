// Count digits
#include <stdio.h>


void main()
{
  char ch;
  int i, count = 0;

    printf("Enter 5 chars :");
    for(i = 1; i <= 5; i ++)
    {
      ch = getch();

      if(isdigit(ch))
          count ++;
    }
    printf("\nCount = %d", count);
}
