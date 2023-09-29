// Take a file from user and display file with line numbers

#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50], line[100];
  int lineno = 1;
  char * cp;


    printf("Enter filename :");
    gets(filename);

    fp = fopen(filename, "rt");
    if(fp == NULL)  // file not found
    {
        printf("File not found!");
        return;
    }

    while(1)
    {
       cp = fgets(line,100,fp);
       if(cp == NULL)  // EOF
         break;

       printf("%3d:%s", lineno, line);
       lineno ++;
    }

    fclose(fp);


}
