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

	int *left = arr;          // first element
	int *right = arr + n - 1; // last element

	// Swap the two ends and move towards the middle
	while (left < right) {
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}

	printf("\nReversed array: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
