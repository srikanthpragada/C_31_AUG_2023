// Take string and replace source with target

#include <stdio.h>

void main()
{
    char st[20];
    char source, target;
    int i;

      printf("Enter string :");
      gets(st);

      printf("Enter source char :");
      source = getche();

      printf("\nEnter target char :");
      target = getche();

      for(i = 0; st[i] != '\0'; i++)
      {
         if (st[i] == source)
            st[i] = target;
      }

      printf("\nResult = %s",st);

}
