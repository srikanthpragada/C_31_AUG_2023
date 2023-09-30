// Take a name and check whether it is present in names.txt

#include <stdio.h>
#define  FILENAME "names.txt"

void main()
{
  FILE * fp;
  char line[100], name[30];
  char * cp;
  int found = 0;


    fp = fopen(FILENAME, "rt");
    if(fp == NULL)  // file not found
    {
        printf("File not found!");
        return;
    }

    printf("Enter search name :");
    gets(name);

    while(1)
    {
       cp = fgets(line,100,fp);
       if(cp == NULL)  // EOF
         break;

       //printf("%d\n", strlen(line));

       // remove \n at the end of line
       line[ strlen(line) - 1]  = '\0';

       if(stricmp(line, name) == 0)
       {
           found = 1;
           break;
       }
    }

    if(found == 1)
        printf("%s Found", name);
    else
        printf("%s Not Found!", name);

    fclose(fp);
}
