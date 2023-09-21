// Take string and print in reverse order

#include <stdio.h>

void main()
{
    char st[20];
    int i;

      printf("Enter string :");
      gets(st);

      for(i = strlen(st) - 1; i >= 0; i--)
         putch(st[i]);

}
