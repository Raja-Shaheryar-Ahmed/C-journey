#include <stdio.h>

int main() {
    short s_val = 32767;
    long l_val = 100000L;
    long long ll_val = 10000000000LL;
    unsigned int u_val = 4000000000U;

    printf("Short: %d\n", s_val);
    printf("Long: %ld\n", l_val);
    printf("Long Long: %lld\n", ll_val);
    printf("Unsigned Int: %u\n", u_val);

    return 0;
}