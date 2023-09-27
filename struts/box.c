#include <stdio.h>

struct box
{
  int l,w,d;
};

main()
{
 struct box b;
 int vol;

  printf("Enter the length, width and depth of the box: ");
  scanf("%d%d%d",&b.l,&b.w,&b.d);

  vol = b.l * b.w * b.d;

  printf("\nThe volume of the box is : %d",vol);
}
