#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the value for n
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    // Outer loop counts DOWN from n to 1 (controls the number of elements per row)
    for(int i = n; i >= 1; i--) {
        
        // Inner loop counts UP from 1 to i
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        // Move to the next line after completing the row
        printf("\n");
    }
    
    return 0; 
}