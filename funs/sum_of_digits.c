// Create a function to return whether a number is prime

#include <stdio.h>

main()
{
 int n;

  printf("Enter the number: ");
  scanf("%d",&n);

  printf("Sum =  %d",sum_digit(n));
}


int sum_digit(int x)
{
int sum=0;

    while(x!=0)
    {
     sum += x%10;
     x= x / 10;
    }
    return sum;
}
