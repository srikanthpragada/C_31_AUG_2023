// Program to display net amount
// Date : 09-sep-2023

#include <stdio.h>

void main()
{
 int price, qty, discount, amount, net_amount;

    printf("Enter price : ");
    scanf("%d",&price);

    printf("Enter price : ");
    scanf("%d",&qty);

    amount = qty * price;

    if (qty > 3)
        discount = amount * 30 / 100;
    else
         if(qty > 2)
            discount = amount * 20 / 100;
         else
            discount = price * 10 / 100;


    net_amount = amount - discount;

    printf("Net Price = %d", net_amount);
}
