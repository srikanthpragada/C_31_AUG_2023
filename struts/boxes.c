#include <stdio.h>

struct box
{
  int l,w,d;
};

main()
{
 struct box boxes[5];
 int i;

    srand(time(0));

    for(i = 0; i < 5; i ++)
    {
        boxes[i].l = rand() % 10 + 1;
        boxes[i].w = rand() % 10 + 1;
        boxes[i].d = rand() % 10 + 1;

        printf("%d, %d, %d\n", boxes[i].l,boxes[i].w,boxes[i].d);
    }

}
