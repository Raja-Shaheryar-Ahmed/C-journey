#include <stdio.h>

int main() {
    float marks;
    printf("Enter your percentage (0-100): ");
    scanf("%f", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered. Please enter between 0 and 100.\n");
    } else if (marks >= 90) {
        printf("Grade: A+ | Remark: Outstanding! Keep shining.\n");
    } else if (marks >= 80) {
        printf("Grade: A  | Remark: Excellent work!\n");
    } else if (marks >= 70) {
        printf("Grade: B  | Remark: Good job, solid understanding.\n");
    } else if (marks >= 60) {
        printf("Grade: C  | Remark: Fair. Room for improvement.\n");
    } else if (marks >= 50) {
        printf("Grade: D  | Remark: Passed, but need to study harder.\n");
    } else {
        printf("Grade: F  | Remark: Failed. Don't give up, try again!\n");
    }

    return 0;
}