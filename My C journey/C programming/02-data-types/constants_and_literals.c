#include <stdio.h>

#define DAYS_IN_WEEK 7 // Macro constant

int main() {
    const float GRAVITY = 9.81f; // Read-only variable
    
    printf("Days in a week: %d\n", DAYS_IN_WEEK);
    printf("Acceleration due to gravity: %.2f m/s^2\n", GRAVITY);

    // GRAVITY = 9.8; // Error: Assignment of read-only variable

    return 0;
}