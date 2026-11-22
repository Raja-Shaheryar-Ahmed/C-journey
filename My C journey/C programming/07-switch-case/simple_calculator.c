#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter an expression (e.g. 8 / 2): ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result: %.2f\n", a + b);
            break;
        case '-':
            printf("Result: %.2f\n", a - b);
            break;
        case '*':
            printf("Result: %.2f\n", a * b);
            break;
        case '/':
            // Dividing by zero is not allowed, so check first
            if (b == 0) {
                printf("Error: cannot divide by zero.\n");
            } else {
                printf("Result: %.2f\n", a / b);
            }
            break;
        default:
            printf("Invalid operator. Use + - * /\n");
    }

    return 0;
}
