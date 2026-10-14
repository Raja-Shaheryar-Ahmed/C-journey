#include <stdio.h>

int main() {
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    // Outer loop controls the rows
    for(int i = 1; i <= n; i++) {
        
        int a = 1; // Initialize 'a' to 1 at the start of every row
        
        // Inner loop runs 'i' times
        for(int j = 1; j <= i; j++) {
            printf("%d ", a); // Print the current odd number stored in 'a'
            a = a + 2;        // Increase 'a' by 2 to get the next odd number (1 -> 3 -> 5...)
        }
        
        printf("\n"); // Move to the next line after completing the row
    }
    
    return 0; 
}