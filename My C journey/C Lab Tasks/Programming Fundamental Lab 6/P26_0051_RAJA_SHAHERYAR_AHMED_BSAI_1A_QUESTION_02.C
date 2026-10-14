#include <stdio.h>

int main() {
    // --- Pattern 01: Hash (#) diamond/triangle patterns ---
    printf("\nPattern 01: \n\n");

    // First half: Increasing hash triangle
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }

    // Second half: Decreasing hash triangle
    int a, b;
    for (a = 1; a <= 5; a++) {
        for (b = 5; b >= a; b--) {
            printf("#");
        }
        printf("\n");
    }

    // --- Pattern 02: Asterisk (*) diamond/triangle patterns ---
    printf("\nPattern 02: \n\n");

    // First half: Increasing asterisk triangle
    int ii, jj;
    for (ii = 1; ii <= 5; ii++) {
        for (jj = 1; jj <= ii; jj++) {
            printf("*");
        }
        printf("\n");
    }

    // Second half: Decreasing asterisk triangle
    int aa, bb;
    for (aa = 1; aa <= 5; aa++) {
        for (bb = 5; bb >= aa; bb--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}