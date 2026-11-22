#include <stdio.h>

int main() {
    int n, i, j;
    long long s, a[1000];
    int count = 0;

    scanf("%d %lld", &n, &s);

    for (i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    // Check every pair of positions (i, j) with i < j exactly once
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == s) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
