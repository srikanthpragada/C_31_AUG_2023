// Program to display interest from amount and interest rate
// Date : 05-sep-2023

#include <stdio.h>

void main()
{
 int amount, rate, interest;

    // Input
    printf("Enter Amount :");
    scanf("%d", &amount);

    printf("Enter Interest Rate :");
    scanf("%d", &rate);

    // Process
    interest = amount * rate / 100;

    // Output
    printf("Interest = %d", interest);
}
