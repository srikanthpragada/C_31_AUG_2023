// Take names until user gives end and display largest name

#include <stdio.h>

void main()
{
    char name[20], largest[20] = "";
    int i;

      while(1)
      {
        printf("Enter name [end to stop] :");
        gets(name);

        if(stricmp(name, "end") == 0)
           break;

        if(strcmp(name, largest) > 0)
             strcpy(largest, name);
      }

      printf("Largest Name = %s", largest);

}
