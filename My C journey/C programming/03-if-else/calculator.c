#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    if (op == '+') {
        printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    } else if (op == '-') {
        printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    } else if (op == '*') {
        printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
    } else if (op == '/') {
        if (num2 == 0.0) {
            printf("Error: Division by zero is undefined!\n");
        } else {
            printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
        }
    } else {
        printf("Error: Invalid operator chosen.\n");
    }

    return 0;
}