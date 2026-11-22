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

	int *ptr = arr; // an array name is the address of its first element

	printf("\nUsing *(ptr + i):\n");
	for (i = 0; i < n; i++) {
		// ptr + i moves i elements forward, not i bytes
		printf("arr[%d] = %d\n", i, *(ptr + i));
	}

	printf("\nUsing ptr++ to walk the array: ");
	for (i = 0; i < n; i++) {
		printf("%d ", *ptr);
		ptr++; // move to the next element
	}
	printf("\n");

	return 0;
}
