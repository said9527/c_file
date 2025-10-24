#include <stdio.h>
#include <stdint.h> //固定宽度整数类型
#include <inttypes.h> //格式化输入输出支持

int main() {
    int32_t myInt32 = INT32_MAX; //32位有符号整数最大值
    uint32_t myUInt32 = UINT32_MAX; //32位无符号整数
    uint64_t myUInt64 = UINT64_MAX; //64位无符号整数最大值

    printf("32位有符号整数:%"PRId32"\n", myInt32);
    printf("32位无符号整数:%"PRIu32"\n", myUInt32);
    printf("64位无符号整数：%"PRIu64"\n", myUInt64);

    return 0;
}