#include<stdio.h>

int main() {
	int number;
	int *ptr; // ptr will hold the address of an int

	printf("Enter an integer: ");
	if (scanf("%d", &number) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	ptr = &number; // & gives the address of number

	printf("\nValue of number      : %d\n", number);
	printf("Address of number    : %p\n", (void *)&number);
	printf("Value stored in ptr  : %p\n", (void *)ptr);
	printf("Value at *ptr        : %d\n", *ptr); // * reads the value at the address

	// Changing *ptr changes number itself
	*ptr = *ptr + 10;
	printf("\nAfter *ptr = *ptr + 10, number is: %d\n", number);

	return 0;
}
