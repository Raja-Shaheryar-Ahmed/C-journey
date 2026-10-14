#include <stdio.h>

// Creating a custom alias using typedef
typedef unsigned long ulong;

// Creating an enumeration for days
enum Day { SUN = 1, MON, TUE, WED, THU, FRI, SAT };

int main() {
    ulong population = 8000000000UL;
    printf("World Population: %lu\n", population);

    enum Day today = WED;
    printf("Day number of Wednesday: %d\n", today);

    return 0;
}