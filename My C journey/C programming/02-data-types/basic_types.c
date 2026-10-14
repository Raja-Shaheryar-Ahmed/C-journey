#include <stdio.h>

int main() {
    int age = 22;
    float temperature = 98.6f;
    double pi = 3.1415926535;
    char grade = 'A';

    printf("Integer (int): %d\n", age);
    printf("Float (float): %.2f\n", temperature);
    printf("Double (double): %.10lf\n", pi);
    printf("Character (char): %c\n", grade);

    return 0;
}