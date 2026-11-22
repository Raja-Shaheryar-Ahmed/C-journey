#include <stdio.h>

int main() {
    int coins[7] = {100, 50, 20, 10, 5, 2, 1};
    long long amount, count = 0;
    int i;

    scanf("%lld", &amount);

    // Always take as many of the biggest coin as possible
    for (i = 0; i < 7; i++) {
        count += amount / coins[i];
        amount %= coins[i];
    }

    printf("%lld\n", count);

    return 0;
}
