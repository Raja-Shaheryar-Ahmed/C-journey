#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the number of rows
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    // Outer loop starts at n and counts down to 1
    for(int i = n; i >= 1; i--) {
        
        // Inner loop prints stars from the current row value down to 1
        for(int j = i; j >= 1; j--) {
            printf("*");
        }
        
        // Move to the next line after completing the row
        printf("\n");
    }
    
    return 0; 
}