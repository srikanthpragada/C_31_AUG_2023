// Take name and print name vertically

#include <stdio.h>

void main()
{
    char name[20];
    int i;

      printf("Enter name :");
      gets(name);

      for(i = 0; name[i] != '\0'; i ++)
          printf("%c\n", name[i]);

}
