#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade (A, B, C, D or F): ");
    scanf(" %c", &grade); // the space before %c skips leftover whitespace

    // Lower-case letters share the same case as upper-case letters
    switch (grade) {
        case 'A':
        case 'a':
            printf("Remarks: Excellent!\n");
            break;
        case 'B':
        case 'b':
            printf("Remarks: Very good.\n");
            break;
        case 'C':
        case 'c':
            printf("Remarks: Good.\n");
            break;
        case 'D':
        case 'd':
            printf("Remarks: Needs improvement.\n");
            break;
        case 'F':
        case 'f':
            printf("Remarks: Failed. Try again.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    return 0;
}
