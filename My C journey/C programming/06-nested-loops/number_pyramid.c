#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the number of rows for the pyramid
    printf("Enter the value of N ---> (lines): ");
    scanf("%d", &n);
    
    // Outer loop: controls the row number, going from row 1 up to row n
    for(int i = 1; i <= n; i++) {
        
        // First inner loop: prints leading spaces for center-alignment
        // For row 'i', it prints (n - i) spaces to center the numbers
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Initialize 'm' to 1 at the beginning of each row
        int m = 1;
        
        // Second inner loop: prints numbers starting from 1 up to (2 * i - 1)
        // For each iteration, it prints 'm' and then increments 'm' by 1
        for(int k = 1; k <= 2 * i - 1; k++) {
            printf("%d", m);
            m += 1; // Increment 'm' to print the next sequential number (1, 2, 3...)
        }
        
        // Move to the next line after completing the spaces and numbers for the current row
        printf("\n");
    }
    
    return 0;
}