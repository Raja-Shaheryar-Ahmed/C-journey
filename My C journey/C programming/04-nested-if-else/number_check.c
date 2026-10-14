#include <stdio.h>

int main() {
    int num = -8;

    if (num != 0) {
        if (num > 0) {
            printf("%d is Positive.\n", num);
            if (num % 2 == 0) {
                printf("It is also an Even number.\n");
            } else {
                printf("It is an Odd number.\n");
            }
        } else {
            printf("%d is Negative.\n", num);
            if (num % 2 == 0) {
                printf("It is also an Even number.\n");
            } else {
                printf("It is an Odd number.\n");
            }
        }
    } else {
        printf("The number is Zero.\n");
    }

    return 0;
}