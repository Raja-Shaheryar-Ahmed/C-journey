#include <stdio.h>

int main() {
    long long n, temp, rev = 0;
    int negative = 0;

    scanf("%lld", &n);

    if (n < 0) {
        negative = 1;
        temp = -n;
    } else {
        temp = n;
    }

    // Build the reversed number digit by digit
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    // A negative number is never a palindrome because of its minus sign
    if (negative) {
        printf("-%lld NO\n", rev);
    } else if (rev == n) {
        printf("%lld YES\n", rev);
    } else {
        printf("%lld NO\n", rev);
    }

    return 0;
}
