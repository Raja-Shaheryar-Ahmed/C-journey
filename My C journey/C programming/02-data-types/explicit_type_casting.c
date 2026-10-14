#include <stdio.h>

int main() {
    int total_marks = 450;
    int max_marks = 500;

    // Without casting, integer division truncates the decimal
    float wrong_percentage = (total_marks / max_marks) * 100;
    
    // With explicit casting, decimals are preserved
    float correct_percentage = ((float)total_marks / max_marks) * 100;

    printf("Wrong Percentage (Truncated): %.2f%%\n", wrong_percentage);
    printf("Correct Percentage (Explicit Cast): %.2f%%\n", correct_percentage);

    return 0;
}