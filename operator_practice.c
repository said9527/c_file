#include <stdio.h>
#include <stdint.h>

void printBinary(uint8_t num) {
    for (int index = 7; index >= 0; index--) {
        printf("%d", (num >> index) & 1);
    }
}

int main(void) {
    //数据类型与变量名毫无意义，只是为了测试
    int a = 12;
    int b = 25;

    // & 常用于清零
    printf("%d\n", a & b);  // 1100 & 11001 = 1000

    int c = 2;
    int d = 5;
    // | 常用于置一
    printf("%d\n", c | d);  // 0010 | 1001 = 1011

    // ^ 常用与判断是否有误
    int e = 2;
    int f = 10;
    printf("%d\n", e ^ f); // 0010 | 10010 = 10000

    // ~ 按位取反
    uint8_t status = 0b00011000;

    printf("Initial status = 0b");
    printBinary(status);
    printf("\t(Binary)\n");

    status = ~status;
    printf("~status = 0b");
    printBinary(status);
    printf("\t(Binary)\n");

    return 0;
}