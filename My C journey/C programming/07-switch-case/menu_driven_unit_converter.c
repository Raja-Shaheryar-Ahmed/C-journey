#include <stdio.h>

int main() {
    int choice;
    float value;

    printf("===== Unit Converter =====\n");
    printf("1. Kilometers to Miles\n");
    printf("2. Miles to Kilometers\n");
    printf("3. Celsius to Fahrenheit\n");
    printf("4. Fahrenheit to Celsius\n");
    printf("5. Kilograms to Pounds\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Reject a bad menu choice before asking for a value
    if (choice < 1 || choice > 5) {
        printf("Invalid choice.\n");
        return 0;
    }

    printf("Enter the value: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            if (value < 0) {
                printf("Distance cannot be negative.\n");
            } else {
                printf("%.2f km = %.2f miles\n", value, value * 0.621371);
            }
            break;
        case 2:
            if (value < 0) {
                printf("Distance cannot be negative.\n");
            } else {
                printf("%.2f miles = %.2f km\n", value, value / 0.621371);
            }
            break;
        case 3:
            printf("%.2f C = %.2f F\n", value, value * 9 / 5 + 32);
            break;
        case 4:
            printf("%.2f F = %.2f C\n", value, (value - 32) * 5 / 9);
            break;
        case 5:
            if (value < 0) {
                printf("Weight cannot be negative.\n");
            } else {
                printf("%.2f kg = %.2f lb\n", value, value * 2.20462);
            }
            break;
    }

    return 0;
}
