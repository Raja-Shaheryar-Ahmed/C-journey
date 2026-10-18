#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the number of rows (height) for the pyramid
    printf("Enter the value of N ---> (lines): ");
    scanf("%d", &n);
    
    // Outer loop: controls the row number, going from row 1 up to row n
    for(int i = 1; i <= n; i++) {
        
        // First inner loop: prints leading spaces for center-alignment (pyramid shape)
        // For row 'i', it prints (n - i) spaces to center the stars
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Second inner loop: prints the star characters (*)
        // The formula (2 * i - 1) generates an odd number of stars for each row:
        // Row 1: 1 star, Row 2: 3 stars, Row 3: 5 stars, etc.
        for(int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        
        // Move to the next line after completing the spaces and stars for the current row
        printf("\n");
    }
    
    return 0;
}