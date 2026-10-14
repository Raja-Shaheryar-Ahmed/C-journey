#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity rule: sum of any two sides must be greater than the third
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Valid triangle! Classification: ");
        if (a == b && b == c) {
            printf("Equilateral Triangle (All sides equal).\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle (Two sides equal).\n");
        } else {
            printf("Scalene Triangle (All sides different).\n");
        }
    } else {
        printf("Invalid triangle sides! They cannot form a closed shape.\n");
    }

    return 0;
}