#include <stdio.h>

// A void function does its job (printing) and returns nothing
void print_triangle(int n);

int main() {
    int n;

    printf("Enter the size of the triangle: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Size must be at least 1.\n");
        return 0;
    }

    print_triangle(n);

    return 0;
}

void print_triangle(int n) {
    // Row i prints i stars
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
