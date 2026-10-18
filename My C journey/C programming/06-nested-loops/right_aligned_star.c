#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the number of rows for the triangle
    printf("Enter the value of N ---> (lines): ");
    scanf("%d", &n);
    
    // Outer loop: controls the row number, going from row 1 up to row n
    for (int i = 1; i <= n; i++) {
        
        // First inner loop: prints leading spaces for right-alignment
        // For row 'i', it prints (n - i) spaces to push the stars to the right
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Second inner loop: prints the star characters (*)
        // For row 'i', it prints exactly 'i' stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        
        // Move to the next line after completing the spaces and stars for the current row
        printf("\n");
    }
    
    return 0;
}