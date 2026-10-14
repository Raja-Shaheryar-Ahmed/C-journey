#include <stdio.h>

int main() {
    int total_pennies = 368;
    int remaining = total_pennies;
    int quarters = remaining / 25;
    remaining %= 25;
    int dimes = remaining / 10;
    remaining %= 10;
    int nickels = remaining / 5;
    remaining %= 5;
    int pennies = remaining;

    printf("Original amount: %d pennies", total_pennies);
    printf("\nCoin distribution (Least number of coins): ");
    printf("\nQuarters (25c): %d", quarters);
    printf("\nDimes (10c): %d", dimes);
    printf("\nNickels (5c): %d", nickels);
    printf("\nPennies (1c): %d", pennies);

    getchar();
    return 0;
}