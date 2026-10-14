#include <stdio.h>

int main() {
    double cart_total;
    int is_prime_member;
    double final_amount;

    printf("Enter your total cart value ($): ");
    scanf("%lf", &cart_total);
    printf("Are you a Prime Member? (Enter 1 for Yes, 0 for No): ");
    scanf("%d", &is_prime_member);

    if (cart_total > 0.0) {
        // Outer Check: Cart Value tiers for discounts
        if (cart_total >= 100.0) {
            printf("Qualifies for high-tier volume discount (15%% off).\n");
            final_amount = cart_total * 0.85;

            // Nested Check for Prime Membership extra perk
            if (is_prime_member == 1) {
                printf("Prime Perk: Extra $10 loyalty bonus applied!\n");
                final_amount -= 10.0;
            } else {
                printf("Tip: Join Prime next time to save an extra $10!\n");
            }

        } else if (cart_total >= 50.0) {
            printf("Qualifies for standard discount (10%% off).\n");
            final_amount = cart_total * 0.90;

            if (is_prime_member == 1) {
                printf("Prime Perk: Free express shipping unlocked!\n");
            } else {
                printf("Standard shipping fee of $5.00 added.\n");
                final_amount += 5.0;
            }

        } else {
            // Low cart total logic
            final_amount = cart_total;
            if (is_prime_member == 1) {
                printf("Prime Perk: Free shipping applied on small cart!\n");
            } else {
                printf("Shipping fee of $10.00 added.\n");
                final_amount += 10.0;
            }
        }

        if (final_amount < 0) final_amount = 0; // Safety floor
        printf("Final Checkout Amount: $%.2lf\n", final_amount);

    } else {
        printf("Your cart is empty.\n");
    }

    return 0;
}