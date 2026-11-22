#include <stdio.h>

int main() {
    int w;

    scanf("%d", &w);

    // Both parts must be positive and even, so w must be even and at least 4
    if (w % 2 == 0 && w > 2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
