#include <stdio.h>

int main() {
    char ch = 'A';

    printf("Character: %c\n", ch);
    printf("ASCII Value (as integer): %d\n", ch);

    // Arithmetic with characters
    char next_ch = ch + 1;
    printf("Next Character: %c\n", next_ch);

    return 0;
}