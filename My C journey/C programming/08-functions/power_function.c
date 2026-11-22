#include <stdio.h>

// Returns base raised to the power exp (exp must be 0 or more)
long long power(int base, int exp);

int main() {
    int base, exp;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    if (exp < 0) {
        printf("Negative exponents are not supported.\n");
    } else {
        printf("%d ^ %d = %lld\n", base, exp, power(base, exp));
    }

    return 0;
}

long long power(int base, int exp) {
    long long result = 1; // anything to the power 0 is 1
    for (int i = 1; i <= exp; i++) {
        result = result * base;
    }
    return result;
}
