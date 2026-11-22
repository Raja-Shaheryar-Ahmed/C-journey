#include <stdio.h>

int main() {
    long long n, i;

    scanf("%lld", &n);

    // Try i = 0, 1, 2, ... until i*i reaches or passes n
    i = 0;
    while (i * i < n) {
        i++;
    }

    if (i * i == n) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
