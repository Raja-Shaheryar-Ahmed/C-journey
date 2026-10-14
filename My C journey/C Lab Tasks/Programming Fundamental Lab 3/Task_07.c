#include <stdio.h>

int main() {
    int sub1;
    int sub2;
    int sub3;

    printf("Enter marks for subject 1: ");
    scanf("%d", &sub1);

    printf("\nEnter marks for subject 2: ");
    scanf("%d", &sub2);

    printf("\nEnter marks for subject 3: ");
    scanf("%d", &sub3);

    int total;
    total = sub1 + sub2 + sub3;

    float avg;
    avg = total / 3.0;

    printf("\nTotal marks are: %d", total);
    printf("\nAverage marks are: %.2f", avg);

    getchar();
    return 0;
}