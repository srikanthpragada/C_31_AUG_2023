#include <stdio.h>

// Recursive function
void reverse(int n)
{
    if(n > 0){
       printf("%d ",n % 10);
       reverse(n / 10); // recursion
    }
}

void main()
{
    reverse(155);
}

