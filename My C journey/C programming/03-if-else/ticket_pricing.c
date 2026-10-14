#include <stdio.h>

int main() {
    int age, is_weekend;
    double base_price = 10.0; // Standard base price in dollars

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Is it a weekend? (Enter 1 for Yes, 0 for No): ");
    scanf("%d", &is_weekend);

    double final_price = base_price;

    // Age-based logic
    if (age < 5) {
        final_price = 0.0; // Toddlers are free
        printf("Ticket is FREE for toddlers under 5!\n");
    } else if (age <= 12) {
        final_price = final_price * 0.5; // 50% child discount
        printf("Child discount applied (50%% off).\n");
    } else if (age >= 65) {
        final_price = final_price * 0.7; // 30% senior discount
        printf("Senior discount applied (30%% off).\n");
    } else {
        printf("Standard adult pricing applies.\n");
    }

    // Weekend surcharge rule (if ticket isn't free)
    if (is_weekend == 1 && final_price > 0) {
        final_price += 3.0; // $3 weekend surcharge
        printf("Weekend surcharge of $3.00 added.\n");
    }

    printf("Final Ticket Price: $%.2lf\n", final_price);

    return 0;
}