#include <stdio.h>

int main() {
    double x, y;
    printf("Enter coordinates (x y): ");
    scanf("%lf %lf", &x, &y);

    // Outer check for origin
    if (x == 0.0 && y == 0.0) {
        printf("The point lies precisely at the Origin (0, 0).\n");
    } else {
        // Checking axes first
        if (x == 0.0) {
            printf("The point lies on the Y-axis.\n");
        } else if (y == 0.0) {
            printf("The point lies on the X-axis.\n");
        } else {
            // Nested checks for Quadrants based on signs of x and y
            if (x > 0.0) {
                if (y > 0.0) {
                    printf("The point (%.1lf, %.1lf) is in Quadrant I (+, +).\n", x, y);
                } else {
                    printf("The point (%.1lf, %.1lf) is in Quadrant IV (+, -).\n", x, y);
                }
            } else {
                if (y > 0.0) {
                    printf("The point (%.1lf, %.1lf) is in Quadrant II (-, +).\n", x, y);
                } else {
                    printf("The point (%.1lf, %.1lf) is in Quadrant III (-, -).\n", x, y);
                }
            }
        }
    }

    return 0;
}