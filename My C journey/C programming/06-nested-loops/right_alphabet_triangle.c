#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the number of rows for the triangle
    printf("Enter the value of N ---> (lines): ");
    scanf("%d", &n);
    
    // Outer loop: controls the row number, going from row 1 up to row n
    for (int i = 1; i <= n; i++) {
        
        // First inner loop: prints leading spaces for right-alignment
        // For row 'i', it prints (n - i) spaces to push the characters to the right
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Initialize 'm' to 65, which is the ASCII value for the uppercase letter 'A'
        int m = 65;
        
        // Second inner loop: prints the characters
        // For row 'i', it prints 'i' characters starting from 'A' and incrementing
        for (int k = 1; k <= i; k++) {
            printf("%c", m); // Print the character corresponding to the ASCII value in 'm'
            m = m + 1;       // Increment 'm' to get the next alphabet letter (e.g., A -> B -> C)
        }
        
        // Move to the next line after completing the spaces and characters for the current row
        printf("\n");
    }
    
    return 0;
}