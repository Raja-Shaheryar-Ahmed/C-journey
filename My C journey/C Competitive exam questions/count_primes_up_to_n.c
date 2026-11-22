#include <stdio.h>

#define MAX 1000000

char composite[MAX + 1];

int main() {
    int n, i, j, count = 0;

    scanf("%d", &n);

    // Sieve of Eratosthenes: cross out multiples of each prime
    for (i = 2; i <= n; i++) {
        if (composite[i] == 0) {
            count++;
            for (j = 2 * i; j <= n; j += i) {
                composite[j] = 1;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
