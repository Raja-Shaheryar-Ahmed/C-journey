#include <stdio.h>

int main() {
    int n, i;
    int a[1000];
    int run = 1, best = 1, bestValue;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    bestValue = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            run++;
        } else {
            run = 1;
        }
        // Strictly greater, so the earliest run wins ties
        if (run > best) {
            best = run;
            bestValue = a[i];
        }
    }

    printf("%d %d\n", best, bestValue);

    return 0;
}
