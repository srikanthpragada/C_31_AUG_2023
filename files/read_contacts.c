// Read contacts from contacts.dat

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
   int count;

      fp = fopen(FILENAME, "rb");  // write binary

      while(1)
      {
          // block address, size of block, no. of blocks, FILE *
          count = fread(&c, sizeof(struct contact), 1, fp);
          if(count == 0) // no block read means EOF
             break;

          printf("%s\n%s\n", c.name, c.email);
          printf("----------------------------\n");
      }

      fclose(fp);

}
