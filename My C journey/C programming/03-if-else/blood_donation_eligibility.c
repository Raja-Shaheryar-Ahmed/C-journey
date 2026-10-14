#include <stdio.h>

int main() {
    int age, recent_illness;
    float weight, hemoglobin;

    printf("--- Blood Donation Eligibility Screener ---\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    // Outer Check: Age constraint
    if (age >= 18 && age <= 65) {
        printf("Enter your weight in kg: ");
        scanf("%f", &weight);

        // Nested Check: Weight constraint
        if (weight >= 50.0f) {
            printf("Enter your hemoglobin level (g/dL): ");
            scanf("%f", &hemoglobin);

            // Nested Check: Hemoglobin count
            if (hemoglobin >= 12.5f) {
                printf("Have you had any major illness or medication in the last 3 months? (1 for Yes, 0 for No): ");
                scanf("%d", &recent_illness);

                // Final Nested Check: Recent medical history
                if (recent_illness == 0) {
                    printf("Congratulations! You are ELIGIBLE to donate blood.\n");
                } else {
                    printf("Deferred: You cannot donate due to recent illness/medication history.\n");
                }

            } else {
                printf("Deferred: Hemoglobin level is too low (minimum 12.5 required).\n");
            }

        } else {
            printf("Deferred: Weight is below the minimum requirement of 50 kg.\n");
        }

    } else {
        printf("Deferred: Age must be between 18 and 65 years old.\n");
    }

    return 0;
}