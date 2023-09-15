// Count diff types of chars
#include <stdio.h>


void main()
{
  char ch;
  int i, upper = 0, lower = 0, digit = 0, other = 0;

    printf("Enter chars :");
    for(i = 1; i <= 10; i ++)
    {
      ch = getche();
      if(isdigit(ch))
          digit ++;
      else
        if(isupper(ch))
            upper++;
        else
            if(islower(ch))
               lower++;
            else
               other ++;
    }

    printf("\nUpper = %d, Lower = %d, Digit = %d, Other = %d",
            upper, lower, digit, other);

}
