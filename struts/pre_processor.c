#include <stdio.h>
#define SIZE 20
#define TITLE  "Srikanth Technologies"


void main()
{
   int a[SIZE];
   int i;

     for(i = 0; i < SIZE; i ++)
          a[i] = i * i;


     for(i = 0; i < SIZE; i ++)
        printf("%d ", a[i]);

     puts(TITLE);
}
