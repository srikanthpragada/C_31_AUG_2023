// Take a file from user on command-line and display file with line numbers

#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  char line[100];
  int lineno = 1;
  char * cp;

    if(argc < 2)
    {
       printf("Sorry! Filename is missing.\nPlease use the following to run command.\n");
       printf("print_file <filename>");
       exit(1); // exit with error
    }


    fp = fopen(argv[1], "rt");
    if(fp == NULL)  // file not found
    {
        printf("File [%s] not found!", argv[1]);
        exit(2);  // exit with error
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
