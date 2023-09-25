// String function

#include <stdio.h>

void replace(char *s, char source, char target)
{
   int i;

   for(i = 0; s[i] != '\0'; i ++)
   {
     if(s[i] == source)
        s[i] = target;
   }
}


void main()
{
  char s[] = "This is fine!";

    replace(s, ' ', '.');
    puts(s);
}
