#include <stdio.h>

// Returns 1 if n is prime, otherwise 0
int is_prime(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("%d is not prime (primes start from 2).\n", n);
    } else if (is_prime(n)) {
        printf("%d is a Prime number.\n", n);
    } else {
        printf("%d is NOT a Prime number.\n", n);
    }

    return 0;
}

int is_prime(int n) {
    // Only need to test divisors up to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // found a divisor, so not prime
        }
    }
    return 1;
}
