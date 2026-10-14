#include <stdio.h>

int main() {
    float hour;
    float distance;
    float speed;

    printf("Enter the number of hours travelled: ");
    scanf("%f", &hour);

    printf("\nEnter the distance (in KM): ");
    scanf("%f", &distance);

    speed = distance / hour;

    printf("\nThe speed is: %.2f", speed);

    getchar();
    return 0;
}