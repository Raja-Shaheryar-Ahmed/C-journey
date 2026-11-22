#include<stdio.h>

// Receives addresses so it can change the caller's variables
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int x, y;

	printf("Enter two integers: ");
	if (scanf("%d %d", &x, &y) != 2) {
		printf("Invalid input.\n");
		return 1;
	}

	printf("Before swap: x = %d, y = %d\n", x, y);
	swap(&x, &y); // pass the addresses
	printf("After swap : x = %d, y = %d\n", x, y);

	return 0;
}
