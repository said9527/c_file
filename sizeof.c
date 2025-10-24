#include <stdio.h>
#include <stdint.h>

int main() {
    printf("size of long: %zu byte(s)\n" , sizeof(long));
    printf("size of long: %zu byte(s)\n" , sizeof(long long));

    int16_t myInt16 = 32767;
    uint16_t myUInt16 = 65535;

    int32_t myInt32 = 2147483647;
    uint32_t myUInt32 = 4294967295U;

    int64_t myInt64 = 9223372036854775807LL;
    uint64_t myUInt64 = 18446744073709551615ULL;

    printf("size of int16_t: %zu byte(s)\n", sizeof(myInt16));
    printf("size of uint16_t: %zu byte(s)\n", sizeof(myUInt16));
    printf("size of int32_t: %zu byte(s)\n", sizeof(myInt32));
    printf("size of uint32_t: %zu byte(s)\n", sizeof(myUInt32));
    printf("size of int64_t: %zu byte(s)\n", sizeof(myInt64));
    printf("size of uint64_t: %zu byte(s)\n", sizeof(myUInt64));

    return 0;
}