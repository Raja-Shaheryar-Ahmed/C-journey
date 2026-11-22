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

	int largest = arr[0];
	int second = 0;
	int has_second = 0; // becomes 1 once we find a value smaller than largest

	for (i = 1; i < n; i++) {
		if (arr[i] > largest) {
			second = largest; // old largest becomes second
			has_second = 1;
			largest = arr[i];
		} else if (arr[i] < largest && (has_second == 0 || arr[i] > second)) {
			second = arr[i];
			has_second = 1;
		}
	}

	if (has_second == 0) {
		printf("\nThere is no second largest (all elements are equal).\n");
	} else {
		printf("\nLargest        : %d\n", largest);
		printf("Second largest : %d\n", second);
	}

	return 0;
}
