#include <stdio.h>

int main() {
    int n;
    float x;
    float s = 0.0;

    // Prompt user for input values
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    printf("Enter the value for x: ");
    scanf("%f", &x);

    // Loop to calculate and sum each term of the series: x^k / k!
    for (int k = 1; k <= n; k++) {
        // Calculate x raised to the power of k (x^k)
        float power = 1.0;
        for (int i = 1; i <= k; i++) {
            power *= x;
        }

        // Calculate factorial of k (k!)
        float fact = 1.0;
        for (int i = 1; i <= k; i++) {
            fact *= i;
        }

        // Add the current term (power / fact) to the total sum
        s += power / fact;
    }

    // Display the final result rounded to 2 decimal places
    printf("s = %.2f\n", s);

    return 0;
}