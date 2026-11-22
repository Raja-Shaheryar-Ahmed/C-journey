#include <stdio.h>

void print_fibonacci(int n);
int fib_recursive(int n);

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive number.\n");
        return 0;
    }

    printf("Loop version     : ");
    print_fibonacci(n);

    // Recursive version (a function calling itself) - shown just as one example
    printf("Recursive version: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib_recursive(i));
    }
    printf("\n");

    return 0;
}

// Prints the first n Fibonacci numbers using a loop
void print_fibonacci(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

// RECURSION EXAMPLE: fib(n) = fib(n-1) + fib(n-2)
// The base cases (0 and 1) stop the function from calling itself forever.
// It is slow for big n, so use the loop version for real work.
int fib_recursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}
