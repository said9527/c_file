#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

//输入整数，只处理0到100的数，分别偶数和奇数，0则退出

int main(void)
{
    int32_t number = 0;


    while (1) {

        scanf("%"PRId32, &number);

        //先处理0
        if (number == 0) {
            break;
        }

        //处理非0到100的整数
        if(number > 100 || number < 0) {
            puts("请输入有效数字\n");
            continue;
        }

        //分辨奇数和偶数
        if (number % 2 == 0)
        {
            printf("%" PRId32 "的是偶数\n", number);
            continue;
        }
        else {
            printf("%" PRId32 "的是奇数\n", number);
            continue;
        }
    }

    puts("游戏结束");

    return 0;
}