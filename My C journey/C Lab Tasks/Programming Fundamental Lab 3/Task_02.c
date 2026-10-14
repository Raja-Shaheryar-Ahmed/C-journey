#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("\nEnter 2nd number: ");
    scanf("%d", &num2);

    int box;
    box = num1;
    num1 = num2;
    num2 = box;

    printf("\nAfter swapping: ");
    printf("\nThe 1st number is: %d", num1);
    printf("\nThe 2nd number is: %d", num2);

    return 0;
}