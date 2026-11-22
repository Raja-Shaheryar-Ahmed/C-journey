#include <stdio.h>

int main() {
    char color;

    printf("Enter the light color (R = Red, Y = Yellow, G = Green): ");
    scanf(" %c", &color);

    switch (color) {
        case 'R':
        case 'r':
            printf("RED: Stop.\n");
            break;
        case 'Y':
        case 'y':
            printf("YELLOW: Get ready.\n");
            break;
        case 'G':
        case 'g':
            printf("GREEN: Go.\n");
            break;
        default:
            printf("Invalid color. Enter R, Y or G.\n");
    }

    return 0;
}
