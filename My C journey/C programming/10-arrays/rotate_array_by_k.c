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

	int k, rotated[100];

	printf("Enter k (number of right rotations, 0 or more): ");
	if (scanf("%d", &k) != 1 || k < 0) {
		printf("Invalid k. It must be 0 or more.\n");
		return 1;
	}

	k = k % n; // rotating n times gives the same array

	// The element at index i moves to index (i + k) % n
	for (i = 0; i < n; i++) {
		rotated[(i + k) % n] = arr[i];
	}

	printf("\nArray after rotating right by %d: ", k);
	for (i = 0; i < n; i++) {
		printf("%d ", rotated[i]);
	}
	printf("\n");

	return 0;
}
