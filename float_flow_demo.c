/*
浮点数的上溢和下溢
*/

#include <stdio.h>
#include <float.h>

int main() {
    float max_float = FLT_MAX;

    float min_float = FLT_MIN;

    float overflow = max_float * 1000.0f;

    float underflow = min_float / 1000.0f;

    printf("max_float: %e\n", max_float);
    printf("overflow: %e\n", overflow);

    printf("min_float: %e\n", min_float);
    printf("underflow: %e\n", underflow);

    printf("float :%d\n", FLT_DIG);     //最小有效位数保证6位
    printf("double : %d\n", DBL_DIG);   //最小有效位数保证15位

    return 0;
}