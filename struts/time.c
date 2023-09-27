#include <stdio.h>

struct time  {
   int h, m, s;
};

void print(struct time t) {
    printf("%02d:%02d:%02d %6d\n", t.h, t.m, t.s, totalseconds(t));
}

int equal(struct time t1, struct time t2)
{
    return totalseconds(t1) == totalseconds(t2) ? 1 : 0;
}

struct time max(struct time t1, struct time t2)
{
    return totalseconds(t1) > totaleseconds(t2) ? t1 : t2;
}

int totalseconds(struct time t) {
    return t.h * 3600 + t.m * 60 + t.s;
}

void main()
{
  struct time times[10];
  int i;

      srand(time(0));
      for(i = 0; i < 10; i ++)
      {
        times[i].h = rand() % 24;
        times[i].m = rand() % 60;
        times[i].s = rand() % 60;
        print(times[i]);
     }
}
