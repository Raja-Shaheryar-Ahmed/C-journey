#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Minimum Int: %d\n", INT_MIN);
    printf("Maximum Int: %d\n", INT_MAX);
    printf("Maximum Unsigned Int: %u\n", UINT_MAX);
    printf("Minimum Float: %E\n", FLT_MIN);
    printf("Maximum Float: %E\n", FLT_MAX);

    return 0;
}