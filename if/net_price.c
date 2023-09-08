// Program to display net price
// Date : 08-sep-2023

#include <stdio.h>

void main()
{
 int price, discount, net_price;

    printf("Enter price : ");
    scanf("%d",&price);

    if (price > 10000)
        discount = price * 20 / 100;
    else
        discount = price * 10 / 100;

    net_price = price - discount;
    printf("Net Price = %d", net_price);
}
