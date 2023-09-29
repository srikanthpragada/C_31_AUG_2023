// Write names into file  - names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  int i;
  char names[][20] = {"Mark", "Jack", "Scott", "Micheal", "Joe", "Jane"};

    fp = fopen("names.txt", "wt");

    for(i = 0; i < 6; i ++)
    {
        fprintf(fp, "%s\n", names[i]);
    }

    fclose(fp);


}
