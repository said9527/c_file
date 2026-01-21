#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <windows.h>

//for实际使用案例，打印进度条

int main(void)
{
    const uint32_t total_steps = 100;

    for (uint32_t i = 0; i <= total_steps; i++) {
        
        printf("\r[");

        for (uint32_t j = 0; j < i; j++) {
            printf("#");
        }

        for (uint32_t m = i; m < total_steps; m++) {
            printf(" ");
        }

        printf("] %" PRIu32 " %%", i);
        Sleep(100);
    }

    return 0;
}