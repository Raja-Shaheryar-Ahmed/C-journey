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

	int even_count = 0;
	int odd_count = 0;

	for (i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			even_count++;
		} else {
			odd_count++; // also works for negative odd numbers (-3 % 2 is -1)
		}
	}

	printf("\nEven numbers: %d\n", even_count);
	printf("Odd numbers : %d\n", odd_count);

	return 0;
}
