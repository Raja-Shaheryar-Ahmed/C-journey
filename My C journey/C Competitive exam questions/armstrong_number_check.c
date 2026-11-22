#include <stdio.h>

int main() {
    long long n, temp, total = 0;
    int digits = 0, i;

    scanf("%lld", &n);

    // Count the digits (0 has one digit)
    temp = n;
    do {
        digits++;
        temp /= 10;
    } while (temp > 0);

    // Add up each digit raised to the power of the digit count
    temp = n;
    while (temp > 0) {
        long long d = temp % 10;
        long long power = 1;
        for (i = 0; i < digits; i++) {
            power *= d;
        }
        total += power;
        temp /= 10;
    }

    if (total == n) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
