// Print whether a number is prime or not
#include <stdio.h>


void main()
{
 int i,num, prime = 1;

    printf("Enter number :");
    scanf("%d",&num);

    for(i = 2; i <= num / 2 ; i ++)
    {
       if(num % i == 0)  // factor found
       {
         printf("Not a prime number");
         prime = 0;
         break;  // terminate loop
       }
    }

    if(prime)   // no factors found
        printf("Prime Number!");

}
