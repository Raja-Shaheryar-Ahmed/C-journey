#include <stdio.h>

int main() {
    int num_int = 10;
    float num_float = 5.5f;

    // int is implicitly converted to float before addition
    float result = num_int + num_float;

    printf("Integer value: %d\n", num_int);
    printf("Float value: %.2f\n", num_float);
    printf("Result of int + float: %.2f (Type: float)\n", result);

    return 0;
}