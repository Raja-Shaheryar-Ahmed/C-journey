#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    // 'a' acts as our continuous counting variable, initialized to 1 outside the loops
    int a = 1;
    
    // Outer loop controls the rows
    for(int i = 1; i <= n; i++){
        
        // Inner loop runs 'i' times per row
        for(int j = 1; j <= i; j++){
            printf(" %d", a);
            a++; // Keep incrementing 'a' so numbers never reset between rows
        }
        
        printf("\n"); // Move to the next line after completing the row
    }
    
    return 0;
}