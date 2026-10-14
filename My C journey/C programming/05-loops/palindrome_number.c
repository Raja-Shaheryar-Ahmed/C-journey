#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter an integer
    printf("Enter any integer number : ");
    scanf("%d", &n);
    
    int original = n; // Save the original number for later comparison
    int reversed = 0; 
    int ld = 0;
    
    // Loop to build the full reversed number mathematically
    while (n > 0) {
        ld = n % 10;                         // Extract the last digit
        reversed = (reversed * 10) + ld;     // Append the digit to the reversed number
        n = n / 10;                          // Remove the last digit
    }
    
    // Compare the reversed number with the original saved number
    if (original == reversed) {
        printf("\n%d is a Palindrome number.\n", original);
    } else {
        printf("\n%d is NOT a Palindrome number.\n", original);
    }
    
    return 0;
}