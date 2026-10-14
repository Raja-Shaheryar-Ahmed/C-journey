#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the size of the grid
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    // Outer loop controls the rows
    for(int i = 1; i <= n; i++) {
        
        // Inner loop controls printing numbers from 1 to n across the columns
        for(int j = 1; j <= n; j++) {
            printf("%d", j);
        }
        
        // Move to the next line after completing a row
        printf("\n");
    }
    
    return 0;
}