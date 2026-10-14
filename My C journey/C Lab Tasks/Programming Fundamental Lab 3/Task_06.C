#include <stdio.h>

int main() {
    int a, b;

    printf("Enter 1st integer: ");
    scanf("%d", &a);

    printf("\nEnter 2nd integer: ");
    scanf("%d", &b);

    float v1, v2, v3;
    v1 = a / b;
    v2 = (float) a / b;
    v3 = (float) (a / b);

    printf("\nv1: %.2f", v1);
    printf("\nv2: %.2f", v2);
    printf("\nv3: %.2f", v3);

    return 0;
}