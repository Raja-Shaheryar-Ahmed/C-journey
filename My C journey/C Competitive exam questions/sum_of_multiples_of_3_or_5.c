#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // A number divisible by both 3 and 5 is still counted only once
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("%lld\n", sum);

    return 0;
}
