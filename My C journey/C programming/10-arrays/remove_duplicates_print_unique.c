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

	int j, is_duplicate;

	printf("\nArray without duplicates: ");
	for (i = 0; i < n; i++) {
		is_duplicate = 0;
		// Look at the elements before arr[i]
		for (j = 0; j < i; j++) {
			if (arr[j] == arr[i]) {
				is_duplicate = 1;
				break;
			}
		}
		// Print only the first time a value appears
		if (is_duplicate == 0) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");

	return 0;
}
