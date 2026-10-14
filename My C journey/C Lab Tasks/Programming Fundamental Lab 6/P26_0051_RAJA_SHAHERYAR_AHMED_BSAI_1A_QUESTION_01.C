#include <stdio.h>

int main() {
    // Variable declarations for Pattern 01
    int i;
    int j;
    int k;

    // --- Pattern 01: Right-aligned inverted triangle ---
    printf("\nPattern 01: \n");
    for (i = 1; i <= 5; i++) {
        // Print leading spaces (increases with each row)
        for (k = 1; k <= i; k++) {
            printf(" ");
        }
        // Print asterisks (decreases with each row)
        for (j = 5; j >= i; j--) {
            printf("*");
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    // Variable declarations for Pattern 02
    int a, b, c;

    // --- Pattern 02: Right-aligned standard triangle ---
    printf("\nPattern 02: \n");
    for (a = 1; a <= 5; a++) {
        // Print leading spaces (decreases with each row)
        for (b = 5; b >= a; b--) {
            printf(" ");
        }
        // Print asterisks (increases with each row)
        for (c = 1; c <= a; c++) {
            printf("*");
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}