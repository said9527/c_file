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
    printf("underflow: %e", underflow);

    return 0;
}