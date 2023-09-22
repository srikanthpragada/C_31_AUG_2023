// Create a function to print number in reverse

#include <stdio.h>

void reverse(int num)
{
   while(num > 0)
   {
       printf("%d", num % 10);
       num /= 10;
   }
}

void main()
{
     reverse(1234);
}
