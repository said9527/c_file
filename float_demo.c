#include <stdio.h>

int main(void) {
    float length = 500.21f, width = 20e1f, height = 1E2f;
    
    double length2 = 500.21;                //无需特别加后缀，因为小数默认是double类型
    
    float number = 123.456f;

    //%f
    printf("dimensions:(L*W*H) = %f * %f * %f\n", length, width, height);
    //%lf
    printf("length2 = %lf\n", length2);
    //%e %E 科学计数发格式化输出
    printf("Using %%e: %e\n", number);      //printf输出%应该写为%%
    printf("Using %%E: %E\n", number);
	//%a %A 十六进制浮点数 p计数法
    printf("Using %%a: %a\n", number);
    printf("Using %%A: %A\n", number);
        
    return 0;
}