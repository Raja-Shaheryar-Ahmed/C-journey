#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the limit number
    printf("Enter any integer number : ");
    scanf("%d", &n);
    
    int fact = 1; // Variable to store the running factorial product
    
    printf("\n");
    
    // Loop from 1 up to n to print the factorial at each step
    for (int i = 1; i <= n; i++) {
        fact = fact * i; // Multiply to get the current factorial
        
        // Print the result in the format: i! = result
        printf("%d! = %d\n", i, fact);
    }
    
    return 0;
}