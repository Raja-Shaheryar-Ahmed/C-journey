#include <stdio.h>

int main() {
    long long n;

    scanf("%lld", &n);

    // Keep adding the digits until only one digit is left
    while (n >= 10) {
        long long sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }

    printf("%lld\n", n);

    return 0;
}
