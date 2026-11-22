#include <stdio.h>

float celsius_to_fahrenheit(float c);
void print_table(int start, int end, int step);

int main() {
    int start, end, step;

    printf("Enter start, end and step (in Celsius): ");
    scanf("%d %d %d", &start, &end, &step);

    if (step <= 0) {
        printf("Step must be positive.\n");
    } else if (start > end) {
        printf("Start must not be greater than end.\n");
    } else {
        print_table(start, end, step);
    }

    return 0;
}

float celsius_to_fahrenheit(float c) {
    return c * 9 / 5 + 32;
}

void print_table(int start, int end, int step) {
    printf("\n Celsius | Fahrenheit\n");
    printf("---------|-----------\n");
    for (int c = start; c <= end; c += step) {
        printf("%8d | %9.1f\n", c, celsius_to_fahrenheit(c));
    }
}
