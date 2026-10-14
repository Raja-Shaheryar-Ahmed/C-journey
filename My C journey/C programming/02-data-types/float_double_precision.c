#include <stdio.h>

int main() {
    float f_num = 3.141592653589793f;
    double d_num = 3.141592653589793;

    printf("Float Pi (6-7 digits): %.15f\n", f_num);
    printf("Double Pi (15 digits): %.15lf\n", d_num);

    return 0;
}