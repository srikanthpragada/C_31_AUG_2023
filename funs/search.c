// Create a function to return position of the number in an array
#include <stdio.h>

int search(int a[10], int sn)
{
    int i;

     for(i = 0; i < 10; i ++)
     {
        if (a[i] == sn)
           return i;
     }

     return -1; // not found
}

void main()
{
 int arr[] = {1,2,4,4,5,6,3,5,3,4};

   printf("%d", search(arr, 15));
}
