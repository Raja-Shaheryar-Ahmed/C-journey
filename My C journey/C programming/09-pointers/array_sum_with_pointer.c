#include<stdio.h>

int main() {
	int arr[100];
	int n, i;
	int sum = 0;

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

	int *ptr = arr; // points to arr[0]

	// Add each element by dereferencing ptr + i
	for (i = 0; i < n; i++) {
		sum = sum + *(ptr + i);
	}

	printf("\nSum of the array: %d\n", sum);

	return 0;
}
