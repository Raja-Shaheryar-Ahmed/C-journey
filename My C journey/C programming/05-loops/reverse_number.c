#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter an integer
    printf("Enter any integer number : ");
    scanf("%d", &n);
    
    int ld = 0; // Variable to store the last digit of the number
    
    printf("Reversed number: ");
    
    // Loop to extract, print, and remove each digit until no digits are left
    while (n > 0) {
        ld = n % 10;      // Extract the last digit
        n = n / 10;       // Remove the last digit from the number
        printf("%d", ld); // Print the extracted digit immediately
    }
    
    printf("\n");
    return 0;
}