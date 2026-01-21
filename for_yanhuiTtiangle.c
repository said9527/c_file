#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    uint32_t number;

    puts("请输入一个数，打印杨辉三角");
    scanf("%" SCNu32, &number);

    for (uint32_t i = 1; i <= number; i++) {

        //打印前面的空格
        for (uint32_t j = number - i; j > 0 ; j--) {
            printf(" ");
        }

        //1到i
        for (uint32_t n = 1; n <= i; n++) {
            printf("%" PRIu32, n);
        }

        //i-1 到 1
        for (uint32_t m = i - 1; m > 0; m--) {
            printf("%" PRIu32, m);
        }

        //后面的数
        for (uint32_t j = number - i; j > 0 ; j--) {
            printf(" ");
        }
        
        printf("\n");
    }

    return 0;
}