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
        
        // Initialize 'm' to 65 (ASCII for 'A') for the first sequence of characters
        int m = 65;
        
        // Second inner loop: prints letters starting from 'A' up to the 'i'-th letter
        // For row 'i', it prints an ascending sequence: A, B, ..., up to the i-th alphabet
        for(int k = 1; k <= i; k++) {
            printf("%c", m);
            m += 1;
        }
        
        // Initialize 'o' to 65 (ASCII for 'A') for the second sequence of characters
        int o = 65;
        
        // Third inner loop: prints letters starting from 'A' up to 'i - 1'
        // This appends an extra ascending sequence right after the first one (e.g., A, B...)
        for(int l = 2; l <= i; l++) {
            printf("%c", o);
            o += 1;
        }
        
        // Move to the next line after completing the spaces and character sequences for the current row
        printf("\n");
    }
    
    return 0;
}