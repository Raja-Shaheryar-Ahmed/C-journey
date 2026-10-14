#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the limit number
    printf("Enter any integer number : ");
    scanf("%d", &n);
    
    int sum = 0; // Variable to store the alternating sum
    
    // Loop from 1 up to n
    for (int i = 1; i <= n; i++) {
        // If 'i' is even, subtract it from the sum (or add its negative value)
        if (i % 2 == 0) {
            sum = sum - i;
        } 
        // If 'i' is odd, add it to the sum
        else {
            sum = sum + i;
        }
    }
    
    // Display the final alternating sum (e.g., 1 - 2 + 3 - 4 ...)
    printf("\nSum is: %d\n", sum);
    
    return 0;
}