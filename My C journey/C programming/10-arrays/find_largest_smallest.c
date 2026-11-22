#include<stdio.h>

int main() {
	int arr[100];
	int n, i;

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

	int largest = arr[0];  // start with the first element
	int smallest = arr[0];

	for (i = 1; i < n; i++) {
		if (arr[i] > largest) {
			largest = arr[i];
		}
		if (arr[i] < smallest) {
			smallest = arr[i];
		}
	}

	printf("\nLargest  : %d\n", largest);
	printf("Smallest : %d\n", smallest);

	return 0;
}
