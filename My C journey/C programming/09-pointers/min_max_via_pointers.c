#include<stdio.h>

// Returns two values through the pointer parameters min and max
void find_min_max(int arr[], int n, int *min, int *max) {
	int i;
	*min = arr[0];
	*max = arr[0];
	for (i = 1; i < n; i++) {
		if (arr[i] < *min) {
			*min = arr[i];
		}
		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
}

int main() {
	int arr[100];
	int n, i;
	int smallest, largest;

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

	find_min_max(arr, n, &smallest, &largest);

	printf("\nMinimum: %d\n", smallest);
	printf("Maximum: %d\n", largest);

	return 0;
}
