#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the value for n
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    // Outer loop counts UP from 1 to n normally
    for (int i = 1; i <= n; i++) {
        
        // Inner loop counts UP from 1, but stops earlier each row using math
        for (int j = 1; j <= n + 1 - i; j++) {
            printf("%d ", j);
        }
        
        // Move to the next line after completing the row
        printf("\n");
    }
    
    return 0; 
}