#include <stdio.h>

int main() {
    int rows;
    int columns;

    // Prompt user for dimensions
    printf("Enter the rows: ");
    scanf("%d", &rows);
    
    printf("Enter the columns: ");
    scanf("%d", &columns);

    // Outer loop handles the rows
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop handles printing stars across the columns
        for (int j = 1; j <= columns; j++) {
            printf("*");
        }
        
        // Move to the next line only AFTER a full row of stars has been printed
        printf("\n");
    }

    return 0; // Good practice for standard C
}