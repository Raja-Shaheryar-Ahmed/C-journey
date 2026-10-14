#include <stdio.h>

int main() {
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    // Checking if the number is positive, negative, or zero
    if (num > 0.0) {
        printf("%.2lf is a positive number.\n", num);
    } else if (num < 0.0) {
        printf("%.2lf is a negative number.\n", num);
    } else {
        printf("You entered zero.\n");
    }

    return 0;
}