#include <stdio.h>

int main() {
    int rows, columns;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    // Removed the extra \n so the prompt looks clean
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            
            /* 
             * Print a star if we are on:
             * - The top edge (i == 1)
             * - The bottom edge (i == rows)
             * - The left edge (j == 1)
             * - The right edge (j == columns)
             */
            if (i == 1 || i == rows || j == 1 || j == columns) {
                printf("*");
            }
            else {
                printf(" "); // Print space for the hollow center
            }
        }
        printf("\n");
    }
    
    return 0; 
}