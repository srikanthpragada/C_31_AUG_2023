// Write contacts to contacts.dat

#include <stdio.h>
#define FILENAME "contacts.dat"

struct contact
{
  char name[30], email[30];
};


void main()
{
   FILE * fp;
   struct contact c;

      fp = fopen(FILENAME, "wb");  // write binary

      while(1)
      {
          printf("Enter name [end to stop] :");
          gets(c.name);

          if (strcmp(c.name, "end") == 0)
             break;

          printf("Enter email :");
          gets(c.email);

          // block address, size of block, no. of blocks, FILE *
          fwrite(&c, sizeof(struct contact), 1, fp);
      }

      fclose(fp);

}
