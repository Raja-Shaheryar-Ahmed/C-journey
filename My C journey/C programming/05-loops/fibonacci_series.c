#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    int t1 = 0, t2 = 1, nextTerm;
    
    printf("\nFibonacci Series: ");
    
    for (int i = 1; i <= n; i++) {
        // Print the first two terms directly
        if (i == 1) {
            printf("%d ", t1);
            continue;
        }
        if (i == 2) {
            printf("%d ", t2);
            continue;
        }
        
        // Calculate the next term by adding the previous two
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        printf("%d ", nextTerm);
    }
    
    printf("\n");
    return 0;
}