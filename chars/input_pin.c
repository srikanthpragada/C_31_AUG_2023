// PIN
#include <stdio.h>


void main()
{
  char ch;
  int i, count = 0;

    printf("Enter PIN :");
    for(i = 1; i <= 4; i ++)
    {
      ch = getch();
      putch('*');

      if(isdigit(ch))
          count ++;
    }

    if(count == 4)
        printf("\nValid PIN");
    else
        printf("\nInvalid PIN");
}
