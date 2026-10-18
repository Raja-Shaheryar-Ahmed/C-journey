#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the number of rows for the upper half of the diamond
    printf("Enter the value of N ---> (lines for upper half): ");
    scanf("%d", &n);
    
    // --- UPPER HALF OF THE DIAMOND ---
    // Controls the growing pyramid rows from 1 up to n
    for(int i = 1; i <= n; i++) {
        // Print leading spaces for center alignment
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print an odd number of stars (1, 3, 5...)
        for(int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    // --- LOWER HALF OF THE DIAMOND ---
    // Controls the shrinking inverted pyramid rows from n-1 down to 1
    for(int i = n - 1; i >= 1; i--) {
        // Print leading spaces for center alignment
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print a decreasing odd number of stars
        for(int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}