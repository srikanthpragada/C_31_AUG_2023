#include <stdio.h>

enum paymode {
   CARD = 10, CASH = 100, UPI = 1, NEFT = 5
};

void main()
{
   enum paymode pay;

     pay = UPI;

     printf("%d", pay);
}
