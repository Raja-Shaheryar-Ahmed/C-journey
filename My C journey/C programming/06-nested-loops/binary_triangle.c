#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of N ---> (lines): ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        // Determine the starting value for the current row (1 for odd rows, 0 for even rows)
        int a = (i % 2 != 0) ? 1 : 0;
        
        for(int j = 1; j <= i; j++) {
            printf(" %d ", a);
            // Flip 'a' between 0 and 1 for the next column
            a = 1 - a; 
        }
        printf("\n");
    }
    
    return 0;
}