#include <stdio.h>

int main() {
    int n;   
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    int a = n; // a starts equal to n
    
    for (int i = 1; i <= n; i++) {
        // Inner loop uses 'a' to print stars
        for (int j = 1; j <= a; j++) {
            printf("*");
        }
        printf("\n");
        
        a--; // Decrement 'a' AFTER printing the row for the next iteration
    }   
    
    return 0; 
}