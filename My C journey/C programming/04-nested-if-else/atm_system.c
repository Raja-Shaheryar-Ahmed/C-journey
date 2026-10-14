#include <stdio.h>

int main() {
    int correctPin = 1234;
    int enteredPin;
    int balance = 50000;
    int amount;
    int accountActive = 1;

    printf("       SECURE ATM SYSTEM\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    // First condition: PIN verification
    if (enteredPin == correctPin) {

        printf("\nPIN verified successfully!\n");

        // Second condition: Account status
        if (accountActive == 1) {

            printf("Account is active.\n");
            printf("Current balance: Rs. %d\n", balance);

            printf("\nEnter amount to withdraw: Rs. ");
            scanf("%d", &amount);

            // Third condition: Withdrawal validation
            if (amount > 0) {

                // Fourth condition: Balance check
                if (amount <= balance) {

                    // Fifth condition: ATM limit
                    if (amount <= 20000) {

                        balance = balance - amount;

                        printf("\nWithdrawal successful!\n");
                        printf("Amount withdrawn: Rs. %d\n", amount);
                        printf("Remaining balance: Rs. %d\n", balance);

                    } else {
                        printf("\nTransaction failed!\n");
                        printf("Maximum withdrawal limit is Rs. 20,000.\n");
                    }

                } else {
                    printf("\nInsufficient balance!\n");
                    printf("Your balance is only Rs. %d.\n", balance);
                }

            } else {
                printf("\nInvalid withdrawal amount!\n");
            }

        } else {
            printf("\nYour account is currently blocked.\n");
            printf("Please contact your bank.\n");
        }

    } else {
        printf("\nIncorrect PIN!\n");
        printf("Access denied.\n");
    }

    printf("        Thank you!\n");

    return 0;
}