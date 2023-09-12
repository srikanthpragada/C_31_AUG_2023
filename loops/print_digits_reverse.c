// Print digits of the number in reverse
#include <stdio.h>


void main()
{
 int num;

    printf("Enter number :");
    scanf("%d",&num);

    while(num > 0)
    {
       printf("%d", num % 10); // right-most digit
       num = num / 10;
    }

}
