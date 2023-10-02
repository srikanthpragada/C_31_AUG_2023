// Takes contact pos and displays details

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
   int count, pos, byte_pos;

      fp = fopen(FILENAME, "rb");  // write binary

      while(1)
      {
        printf("Enter position [0 to stop]: ");
        scanf("%d",&pos);

        if(pos == 0)
          break;

        // move to required byte
        byte_pos = (pos - 1) * sizeof(struct contact);
        fseek(fp, byte_pos, SEEK_SET);

        // read a contact
        count = fread(&c, sizeof(struct contact), 1, fp);
        if(count == 0)
            printf("Invalid position!\n");
        else
            printf("%s\n%s\n", c.name, c.email);
      }

      fclose(fp);
}
