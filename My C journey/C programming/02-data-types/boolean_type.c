#include <stdio.h>
#include <stdbool.h>

int main() {
    bool is_coding_fun = true;
    bool is_difficult = false;

    if (is_coding_fun) {
        printf("Coding is fun!\n");
    }
    
    printf("Value of true: %d\n", is_coding_fun);
    printf("Value of false: %d\n", is_difficult);

    return 0;
}