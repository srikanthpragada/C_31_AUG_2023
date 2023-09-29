// read names from file  - names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  char ch;

    fp = fopen("names.txt", "rt");

    while(1)
    {
        ch = fgetc(fp);  // read a char
        if (ch == EOF)   // stop if EOF is reached
             break;

        putch(ch);      // Display char on screen
    }

    fclose(fp);


}
