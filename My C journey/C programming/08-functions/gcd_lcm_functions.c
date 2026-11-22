#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int a, b;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Both numbers must be positive.\n");
        return 0;
    }

    printf("GCD = %d\n", gcd(a, b));
    printf("LCM = %d\n", lcm(a, b));

    return 0;
}

// Euclid's method: keep replacing (a, b) with (b, a % b) until b is 0
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// LCM * GCD = a * b. Divide first to avoid overflow.
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
