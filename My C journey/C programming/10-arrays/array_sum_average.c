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

	int sum = 0;
	for (i = 0; i < n; i++) {
		sum = sum + arr[i];
	}

	// Cast to float so the division keeps the decimal part
	float average = (float)sum / n;

	printf("\nSum     : %d\n", sum);
	printf("Average : %.2f\n", average);

	return 0;
}
