// Take string and print word per line

#include <stdio.h>

void main()
{
    char st[50];
    int i;

      printf("Enter string :");
      gets(st);

      for(i = 0; st[i] != '\0'; i++)
      {
          if (isspace(st[i]))
             putch('\n');
          else
             putch(st[i]);
      }

}
