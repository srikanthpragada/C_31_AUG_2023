// Array vs. Pointer

#include <stdio.h>

void fill_random(int arr[])
{
   int i;

   srand(time(0));
   for(i = 0; i < 5; i ++)
        arr[i] = rand() % 100;
}


void print(int arr[])
{
   int i;

   for(i = 0; i < 5; i ++)
     printf("%d\n", arr[i]);
}

void main()
{
 int a[5];


 //   printf("%d  %d", a[0], *a);

    fill_random(a);
    print(a);

}
