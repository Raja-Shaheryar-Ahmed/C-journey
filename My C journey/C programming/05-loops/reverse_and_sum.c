#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter an integer
    printf("Enter any integer number : ");
    scanf("%d", &n);
    
    int ld = 0;   // Variable to store the last digit of the number
    int sum = 0;  // Variable to store the running sum of the digits
    
    printf("Reversed digits: ");
    
    // Loop to extract, print, remove each digit, and calculate the sum
    while (n > 0) {
        ld = n % 10;     // Extract the last digit
        n = n / 10;      // Remove the last digit from the number
        printf("%d", ld);// Print the digit immediately (showing the number in reverse)
        sum = sum + ld;  // Add the digit to the total sum
    }
    
    // Display the final calculated sum
    printf("\nSum is: %d\n", sum);
    
    return 0;
}