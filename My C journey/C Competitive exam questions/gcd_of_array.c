#include <stdio.h>

// Euclid's algorithm for non-negative numbers
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n, i;
    long long x, result = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%lld", &x);
        if (x < 0) {
            x = -x;
        }
        // gcd(0, x) is x, so starting from 0 works naturally
        result = gcd(result, x);
    }

    printf("%lld\n", result);

    return 0;
}
