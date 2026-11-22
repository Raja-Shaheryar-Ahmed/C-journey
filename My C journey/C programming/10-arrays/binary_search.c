#include<stdio.h>

int main() {
	int arr[100];
	int n, i, key;

	printf("Enter number of elements (1-100): ");
	if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
		printf("Invalid size. It must be between 1 and 100.\n");
		return 1;
	}

	printf("Enter %d integers in ascending order: ", n);
	for (i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			printf("Invalid input.\n");
			return 1;
		}
		if (i > 0 && arr[i] < arr[i - 1]) {
			printf("Binary search needs a sorted array (ascending).\n");
			return 1;
		}
	}

	printf("Enter the number to search: ");
	if (scanf("%d", &key) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	int low = 0;
	int high = n - 1;
	int found = -1; // index of key, -1 means not found

	// Keep halving the range that could contain the key
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] == key) {
			found = mid;
			break;
		} else if (arr[mid] < key) {
			low = mid + 1;  // search the right half
		} else {
			high = mid - 1; // search the left half
		}
	}

	if (found == -1) {
		printf("\n%d was not found in the array.\n", key);
	} else {
		printf("\n%d found at index %d (position %d).\n", key, found, found + 1);
	}

	return 0;
}
