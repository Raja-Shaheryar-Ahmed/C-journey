#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the number of rows for the triangle
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    // Outer loop controls the rows (from 1 up to n)
    for(int i = 1; i <= n; i++) {
        
        // Inner loop controls printing stars, running up to the current row number ('i')
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Move to the next line after completing the row
        printf("\n");
    }
    
    return 0; 
}