#include <stdio.h>
#include <ctype.h> // For isalpha()

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (!isalpha(ch)) {
        printf("Error: '%c' is not a valid alphabet letter.\n", ch);
    } else {
        // Convert to lowercase for easier comparison
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("'%c' is a Vowel.\n", ch);
        } else {
            printf("'%c' is a Consonant.\n", ch);
        }
    }

    return 0;
}