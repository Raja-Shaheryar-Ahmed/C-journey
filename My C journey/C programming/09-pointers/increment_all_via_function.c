#include<stdio.h>

// Adds 'amount' to every element, using a pointer to the first element
void increment_all(int *ptr, int n, int amount) {
	int i;
	for (i = 0; i < n; i++) {
		*(ptr + i) = *(ptr + i) + amount; // changes the original array
	}
}

int main() {
	int arr[100];
	int n, i, amount;

	printf("Enter number of elements (1-100): ");
	if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
		printf("Invalid size. It must be between 1 and 100.\n");
		return 1;
	}

	printf("Enter %d integers: ", n);
	for (i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			printf("Invalid input.\n");
			return 1;
		}
	}

	printf("Enter the amount to add to each element: ");
	if (scanf("%d", &amount) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	increment_all(arr, n, amount);

	printf("\nArray after increment: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
