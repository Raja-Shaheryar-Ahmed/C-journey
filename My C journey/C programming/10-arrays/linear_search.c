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

	int key;
	int found = 0;

	printf("Enter the number to search: ");
	if (scanf("%d", &key) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	// Check every element from left to right
	for (i = 0; i < n; i++) {
		if (arr[i] == key) {
			printf("\n%d found at index %d (position %d).\n", key, i, i + 1);
			found = 1;
			break; // stop at the first match
		}
	}

	if (found == 0) {
		printf("\n%d was not found in the array.\n", key);
	}

	return 0;
}
