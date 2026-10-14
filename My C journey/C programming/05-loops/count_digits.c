#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter an integer
    printf("Enter any integer number : ");
    scanf("%d", &n);
    
    int count = 0; // Variable to keep track of the number of digits
    
    // Handle the special case if the user enters 0
    if (n == 0) {
        count = 1;
    } else {
        // Loop to strip each digit one by one
        while (n > 0) {
            n = n / 10;  // Remove the last digit
            count++;     // Increment the count for each digit removed
        }
    }
    
    // Display the total digit count
    printf("\nTotal number of digits: %d\n", count);
    
    return 0;
}