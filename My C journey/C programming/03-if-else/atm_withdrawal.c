#include <stdio.h>

int main() {
    int entered_pin;
    int correct_pin = 1234;
    double balance = 5000.00;
    double withdraw_amount;
    double daily_limit = 2000.00;

    printf("Welcome to the ATM\n");
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &entered_pin);

    // Outer If-Else: PIN Authentication
    if (entered_pin == correct_pin) {
        printf("PIN correct! Access granted.\n");
        printf("Enter amount to withdraw: $");
        scanf("%lf", &withdraw_amount);

        // Inner If-Else 1: Check if amount is valid
        if (withdraw_amount > 0) {
            // Inner If-Else 2: Check account balance
            if (withdraw_amount <= balance) {
                // Inner If-Else 3: Check daily limit
                if (withdraw_amount <= daily_limit) {
                    balance -= withdraw_amount;
                    printf("Please collect your cash: $%.2f\n", withdraw_amount);
                    printf("Remaining Balance: $%.2f\n", balance);
                } else {
                    printf("Transaction failed! Amount exceeds your daily limit of $%.2f.\n", daily_limit);
                }
            } else {
                printf("Transaction failed! Insufficient funds. Current balance: $%.2f\n", balance);
            }
        } else {
            printf("Invalid amount entered.\n");
        }

    } else {
        printf("Incorrect PIN! Card blocked for security reasons.\n");
    }

    return 0;
}