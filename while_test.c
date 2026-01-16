#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>

/*
    自动贩卖机，只卖一种价格为5元的饮料，用户每次可以放入1，2，5面值的硬币
*/

int main(void)
{
    const uint32_t PRICE = 5; 
    uint32_t balance = 0;   //余额 
    uint32_t coin = 0;      //投入硬币的币值

    puts("welcome use");

    while (balance < PRICE) {
        puts("请投入硬币：");
        scanf("%"PRIu32, &coin);
        if (coin == 1 || coin == 2 || coin ==5) {
            balance += coin;
        } else {
            puts("请投入面值为1，2，5的硬币");
        }
    }

    if (balance >= 5) {
        balance -= PRICE;
    puts("饮料已出柜");
    }

    return 0;
}