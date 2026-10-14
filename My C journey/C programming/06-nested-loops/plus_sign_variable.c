#include <stdio.h>

int main() {
    int n;
    printf("Enter the value for n (use an odd number): ");
    scanf("%d", &n);
    
    /* 
     * LOGIC EXPLANATION FOR THE MIDDLE LINE (mid):
     * ----------------------------------------------------
     * To draw a centered plus sign in an n x n grid, we need to find 
     * the exact middle row and column coordinates.
     * 
     * 1. Integer Division (n / 2): In C, dividing an integer by 2 
     *    automatically truncates any decimals (e.g., 5 / 2 becomes 2).
     * 2. Finding the Center (+ 1): For an odd grid size like 5 
     *    (positions 1, 2, 3, 4, 5), the center is 3. 
     *    Since (5 / 2) equals 2, adding 1 shifts it to position 3.
     * 3. Result: 'mid = n / 2 + 1' guarantees the exact center row and 
     *    column for any given odd number n.
     */
    
    // Outer loop controls the rows
    for(int i = 1; i <= n; i++){
        // Inner loop controls the columns across each row
        for(int j = 1; j <= n; j++){
            int mid = n / 2 + 1;
            // If we are on the middle column (j == mid) or middle row (i == mid)
            if (j == mid || i == mid){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0; 
}