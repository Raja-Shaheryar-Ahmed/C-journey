#include <stdio.h>

int main() {
    int count = 0;
    int num = 2;

    // Loop until we find the first 4 perfect numbers
    while (count < 4) {
        int sum = 0;

        // Find all proper divisors of 'num' and calculate their sum
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        // Check if the number is a perfect number (sum of divisors equals the number)
        if (sum == num) {
            printf("%d is a perfect number\n", num);

            // Print the breakdown equation of the divisors
            for (int i = 1; i < num; i++) {
                if (num % i == 0) {
                    if (i == 1) {
                        printf("%d", i);
                    } else {
                        printf("+%d", i);
                    }
                }
            }
            printf("=%d\n", num);

            // Increment the count of found perfect numbers
            count++;
        }

        // Move to the next number to check
        num++;
    }

    return 0;
}