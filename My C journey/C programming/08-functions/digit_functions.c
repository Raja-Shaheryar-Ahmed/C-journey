#include <stdio.h>

int count_digits(int n);
int sum_digits(int n);
int reverse_digits(int n);

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    printf("Digits  : %d\n", count_digits(n));
    printf("Sum     : %d\n", sum_digits(n));
    printf("Reversed: %d\n", reverse_digits(n));

    return 0;
}

int count_digits(int n) {
    if (n == 0) return 1; // zero has one digit
    int count = 0;
    while (n > 0) {
        count++;
        n = n / 10;
    }
    return count;
}

int sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

// Builds the reversed number (1200 becomes 21, leading zeros are lost)
int reverse_digits(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    return reversed;
}
