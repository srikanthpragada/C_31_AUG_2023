// Program to calculate net amount
// Date : 06-sep-2023

#include <stdio.h>

void main()
{
 int price, qty, amount, after_discount, discount, tax, net_amount;


    printf("Enter Price :");
    scanf("%d", &price);

    printf("Enter Qty   :");
    scanf("%d", &qty);

    amount = qty * price;
    discount = amount * 10 / 100;
    after_discount = amount - discount;
    tax = after_discount * 8 / 100;
    net_amount = after_discount + tax;

    printf("Amount         : %6d\n", amount);
    printf("- Discount     : %6d\n", discount);
    printf("After Discount : %6d\n", after_discount);
    printf("+ Tax          : %6d\n", tax);
    printf("Net Amount     : %6d", net_amount);
}
