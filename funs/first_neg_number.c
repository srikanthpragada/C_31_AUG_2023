// Create a function to return smallest factor

#include <stdio.h>

int first_neg_number(int a[10])
{
    int i;

     for(i = 0; i < 10; i ++)
     {
        if (a[i] < 0)
           return a[i];
     }

     return 0; // no negative found
}

void main()
{
 int arr[] = {1,2,4,4,5,6,3,5,3,4};

   printf("%d", first_neg_number(arr));
}
