#include <stdio.h>

struct product
{
   char name[30];
   int price, qoh;
};

void main()
{
  struct product p;

    strcpy(p.name, "iPhone 15");
    p.price = 100000;
    p.qoh = 10;

    printf("%s %d %d", p.name, p.price, p.qoh);
}
