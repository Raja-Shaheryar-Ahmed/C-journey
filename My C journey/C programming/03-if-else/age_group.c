#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0 || age > 125) {
        printf("Please enter a realistic human age.\n");
    } else if (age <= 12) {
        printf("Category: Child (Enjoy the youth!)\n");
    } else if (age <= 19) {
        printf("Category: Teenager (Navigating high school and growth)\n");
    } else if (age <= 59) {
        printf("Category: Adult (Time to hustle and build a career)\n");
    } else {
        printf("Category: Senior Citizen (Wisdom and relaxation time)\n");
    }

    return 0;
}