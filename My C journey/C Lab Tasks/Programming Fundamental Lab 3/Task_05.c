#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("\nEnter the value of b: ");
    scanf("%f", &b);

    printf("\nEnter the value of c: ");
    scanf("%f", &c);

    float discriminant;
    discriminant = (b * b) - (4 * a * c);

    if (discriminant < 0) {
        printf("\nRoots are complex..!");
    } else {
        float x1, x2;
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nRoot 1: %.3f", x1);
        printf("\nRoot 2: %.3f", x2);
    }

    return 0;
}