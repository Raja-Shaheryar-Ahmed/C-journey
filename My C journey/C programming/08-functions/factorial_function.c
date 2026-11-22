#include <stdio.h>

// Returns n! as long long (fits up to 20!, int would overflow after 12!)
long long factorial(int n);

int main() {
    int n;

    printf("Enter a number (0-20): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (n > 20) {
        printf("Number too large, it would overflow.\n");
    } else {
        printf("%d! = %lld\n", n, factorial(n));
    }

    return 0;
}

long long factorial(int n) {
    long long fact = 1; // 0! is 1, so the loop simply doesn't run for 0
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
