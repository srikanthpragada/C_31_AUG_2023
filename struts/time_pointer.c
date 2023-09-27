#include <stdio.h>

struct time {
   int h, m, s;
};

void init(struct time * t)
{
   t->h = t->m = t->s = 0;
}


void main()
{
  struct time t1;

      init(&t1);
      printf("%02d:%02d:%02d", t1.h, t1.m, t1.s);
}
