#include <stdio.h>

// Returns 1 if n is even, 0 if odd
int is_even(int n);

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (is_even(n)) {
        printf("%d is Even.\n", n);
    } else {
        printf("%d is Odd.\n", n);
    }

    return 0;
}

int is_even(int n) {
    return n % 2 == 0;
}
