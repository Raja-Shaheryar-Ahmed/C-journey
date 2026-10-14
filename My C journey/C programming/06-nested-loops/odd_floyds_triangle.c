#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    // Start our sequence at 1
    int a = 1;
    
    // Outer loop controls the rows
    for(int i = 1; i <= n; i++){
        
        // Inner loop runs 'i' times per row
        for(int j = 1; j <= i; j++){
            printf(" %d", a);
            
            // Increment 'a' by 2 to jump to the next odd number (1, 3, 5, 7...)
            a += 2; 
        }
        
        printf("\n"); // Move to the next line after completing the row
    }
    
    return 0;
}