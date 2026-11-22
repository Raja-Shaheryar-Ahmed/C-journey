#include <stdio.h>

int main() {
    int month, year, days;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if (year <= 0) {
        printf("Invalid year.\n");
        return 0;
    }

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            // Leap year: divisible by 4, but century years must be divisible by 400
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            printf("Invalid month. Enter 1 to 12.\n");
            return 0;
    }

    printf("Month %d of year %d has %d days.\n", month, year, days);

    return 0;
}
