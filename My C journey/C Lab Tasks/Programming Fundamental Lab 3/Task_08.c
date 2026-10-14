#include <stdio.h>

int main() {
    float val;

    printf("Enter float value between -1000 and 1000: ");
    scanf("%f", &val);

    int val2;
    val2 = val;

    printf("\nOriginal value you entered: %f", val);
    printf("\nConverted value: %d", val2);

    float diff;
    diff = (float) (val2 - val);

    printf("\n%f", diff);

    return 0;
}