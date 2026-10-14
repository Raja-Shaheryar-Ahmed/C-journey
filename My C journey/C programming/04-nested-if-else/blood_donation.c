#include <stdio.h>

int main() {
    int age = 22;
    float weight = 55.5;

    if (age >= 18) {
        printf("Age requirement met (18 or older).\n");
        if (weight >= 50.0) {
            printf("You are eligible to donate blood!\n");
        } else {
            printf("You are not eligible: Weight must be at least 50 kg.\n");
        }
    } else {
        printf("You are not eligible: Must be at least 18 years old.\n");
    }

    return 0;
}