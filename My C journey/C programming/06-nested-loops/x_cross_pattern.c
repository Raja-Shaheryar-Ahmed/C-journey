#include <stdio.h>

int main() {
    int n;
    printf("Enter n (use an odd number for a centered intersection): ");
    scanf("%d", &n);
    
    // Outer loop controls the rows
    for(int i = 1; i <= n; i++){
        
        // Inner loop controls the columns across each row
        for(int j = 1; j <= n; j++){
            
            /* 
             * i == j        -> Prints the top-left to bottom-right diagonal
             * i + j == n + 1 -> Prints the top-right to bottom-left diagonal
             */
            if(i == j || (i + j) == (n + 1)){
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