#include <stdio.h>

int main() {
    float exam_score, attendance;
    double family_income;

    printf("Enter exam score percentage (0-100): ");
    scanf("%f", &exam_score);

    // Outer Check: Minimum academic qualification for scholarship
    if (exam_score >= 80.0f) {
        printf("Enter annual family income ($): ");
        scanf("%lf", &family_income);

        // Nested Check: Income tier
        if (family_income < 30000.0) {
            printf("Enter your overall class attendance percentage: ");
            scanf("%f", &attendance);

            // Deeply Nested Check: Attendance criteria
            if (attendance >= 85.0f) {
                printf("Status: APPROVED for Full Scholarship (100%% tuition waiver)!\n");
            } else {
                printf("Status: Rejected. Academic score and income met, but attendance is below 85%%.\n");
            }

        } else if (family_income <= 60000.0) {
            printf("Status: APPROVED for Partial Scholarship (50%% tuition waiver).\n");
        } else {
            printf("Status: Not eligible for need-based scholarships due to family income level.\n");
        }

    } else {
        printf("Status: Not eligible. Exam score must be at least 80%% to apply.\n");
    }

    return 0;
}