#include<stdio.h>

int main() {
	int number;

	printf("Enter an integer: ");
	if (scanf("%d", &number) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	int *ptr = &number; // pointer to int
	int **pptr = &ptr;  // pointer to a pointer to int

	printf("\nnumber  = %d\n", number);
	printf("*ptr    = %d\n", *ptr);   // one dereference
	printf("**pptr  = %d\n", **pptr); // two dereferences

	// Changing the value through the double pointer
	**pptr = 100;
	printf("\nAfter **pptr = 100, number is: %d\n", number);

	return 0;
}
