#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter an integer
    printf("Enter any integer number : ");
    scanf("%d", &n);
    
    int fact = 1; // Variable to store the factorial result
    
    // Special case: Factorial of 0 is always 1
    if (n == 0) {
        printf("\nThe factorial of %d is: %d\n", n, fact);
    } 
    else {
        // Loop from 1 to n to calculate the factorial (n!)
        for (int i = 1; i <= n; i++) {
            fact = fact * i; // Multiply the running product by the current number
        }
        // Display the final factorial result
        printf("\nThe factorial of %d is: %d\n", n, fact);	
    }
    
    return 0;
}