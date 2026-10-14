#include <stdio.h>

int main() {
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    // Outer loop controls the rows
    for(int i = 1; i <= n; i++){
        
        int a = 65; // 65 is the ASCII code for 'A'
        
        // Inner loop prints letters across the row
        for(int j = 1; j <= n; j++){
            printf("%c ", a); // Print the character corresponding to the ASCII value
            a++;              // Increment 'a' to move to the next letter (66 -> 'B', 67 -> 'C'...)
        }
        
        printf("\n"); // Move to the next line after completing the row
    }
    
    return 0; 
}