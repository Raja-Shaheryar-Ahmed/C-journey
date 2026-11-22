#include <stdio.h>

int main() {
    long long n, peak;
    int steps = 0;

    scanf("%lld", &n);
    peak = n;

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        steps++;
        if (n > peak) {
            peak = n;
        }
    }

    printf("%d %lld\n", steps, peak);

    return 0;
}
