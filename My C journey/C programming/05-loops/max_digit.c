#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter an integer
    printf("Enter any integer number : ");
    scanf("%d", &n);
    
    int max = 0;  // Variable to store the largest digit found
    int ld = 0;   // Variable to store the current extracted digit
    
    // Loop to check each digit
    while (n > 0) {
        ld = n % 10;       // Extract the last digit
        
        // If the current digit is greater than our current max, update max
        if (ld > max) {
            max = ld;
        }
        
        n = n / 10;        // Remove the last digit
    }
    
    // Display the maximum digit
    printf("\nThe maximum digit is: %d\n", max);
    
    return 0;
}