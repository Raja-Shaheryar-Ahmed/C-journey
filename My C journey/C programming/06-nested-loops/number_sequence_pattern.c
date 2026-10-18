#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the number of rows for the pattern
    printf("Enter the value of N ---> (lines): ");
    scanf("%d", &n);
    
    // Outer loop: controls the row number, going from row 1 up to row n
    for(int i = 1; i <= n; i++) {
        
        // First inner loop: prints leading spaces for alignment
        // For row 'i', it prints (n - i) spaces to position the row correctly
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Initialize 'm' to 1 for the first sequence of numbers
        int m = 1;
        
        // Second inner loop: prints numbers starting from 1 up to 'i'
        // For row 'i', it prints an ascending sequence: 1, 2, ..., i
        for(int k = 1; k <= i; k++) {
            printf("%d", m);
            m += 1;
        }
        
        // Initialize 'o' to 1 for the second sequence of numbers
        int o = 1;
        
        // Third inner loop: prints numbers starting from 1 up to 'i - 1'
        // This appends an extra ascending sequence (1 to i-1) right after the first one
        for(int l = 2; l <= i; l++) {
            printf("%d", o);
            o += 1;
        }
        
        // Move to the next line after completing the spaces and number sequences for the current row
        printf("\n");
    }
    
    return 0;
}