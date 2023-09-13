// Print largest digit
#include <stdio.h>


void main()
{
 int num, digit, largest_digit = 0;

    printf("Enter number :");
    scanf("%d",&num);

    while(num > 0)
    {
       digit = num % 10;

       if(digit > largest_digit)
            largest_digit = digit;

       num = num / 10;
    }

    printf("Largest digit = %d", largest_digit);
}
