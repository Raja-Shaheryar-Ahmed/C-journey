#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the number of rows for the pyramid
    printf("Enter the value of N ---> (lines): ");
    scanf("%d", &n);
    
    // Outer loop: controls the row number, going from row 1 up to row n
    for(int i = 1; i <= n; i++) {
        
        // First inner loop: prints leading spaces for center-alignment
        // For row 'i', it prints (n - i) spaces to center the letters
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Initialize 'm' to 65 at the beginning of each row, which represents the ASCII value for 'A'
        int m = 65;
        
        // Second inner loop: runs (2 * i - 1) times per row to print an odd number of letters
        // For each iteration, it prints the character corresponding to 'm' and increments 'm' by 1
        for(int k = 1; k <= 2 * i - 1; k++) {
            printf("%c", m);
            m += 1; // Increment 'm' to move to the next letter in the alphabet (A -> B -> C...)
        }
        
        // Move to the next line after completing the spaces and characters for the current row
        printf("\n");
    }
    
    return 0;
}