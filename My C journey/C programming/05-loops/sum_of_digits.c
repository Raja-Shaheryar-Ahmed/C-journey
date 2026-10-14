#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter an integer
    printf("Enter any integer number : ");
    scanf("%d", &n);
    
    int sum = 0; // Variable to store the sum of the digits
    int ld = 0;  // Variable to store the last digit of the number
    
    // Loop to extract and add each digit until no digits are left
    while (n > 0) {
        ld = n % 10;   // Extract the last digit
        n = n / 10;    // Remove the last digit from the number
        sum += ld;     // Add the extracted digit to the running sum
    }
    
    // Display the final sum of the digits
    printf("\nSum of the digits: %d\n", sum);
    
    return 0;
}