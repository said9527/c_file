#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#include <inttypes.h>

//字母出现次数统计

#define LETTER_COUNT 26 

int main(void)
{
    char str[50] = "What can I see man";        //''只能在单个字符时使用
    uint32_t frequency[LETTER_COUNT] = {0};

    for (uint32_t i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') {
            frequency[ch - 'a']++;
        }
    }

    puts("输出字母次数：");
    for (uint32_t i = 0; i < LETTER_COUNT; i++) {
        if (frequency[i] > 0) {
            printf("%c : %" PRIu32"\n", i + 'a', frequency[i]);
        }
    }
    
    return 0;
}