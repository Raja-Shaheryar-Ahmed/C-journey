#include<stdio.h>

int main() {
	int a[100], b[100], merged[200];
	int n1, n2, i, j, k;

	printf("Enter size of first array (1-100): ");
	if (scanf("%d", &n1) != 1 || n1 < 1 || n1 > 100) {
		printf("Invalid size. It must be between 1 and 100.\n");
		return 1;
	}
	printf("Enter %d integers in ascending order: ", n1);
	for (i = 0; i < n1; i++) {
		if (scanf("%d", &a[i]) != 1) {
			printf("Invalid input.\n");
			return 1;
		}
		if (i > 0 && a[i] < a[i - 1]) {
			printf("The array must be sorted in ascending order.\n");
			return 1;
		}
	}

	printf("Enter size of second array (1-100): ");
	if (scanf("%d", &n2) != 1 || n2 < 1 || n2 > 100) {
		printf("Invalid size. It must be between 1 and 100.\n");
		return 1;
	}
	printf("Enter %d integers in ascending order: ", n2);
	for (i = 0; i < n2; i++) {
		if (scanf("%d", &b[i]) != 1) {
			printf("Invalid input.\n");
			return 1;
		}
		if (i > 0 && b[i] < b[i - 1]) {
			printf("The array must be sorted in ascending order.\n");
			return 1;
		}
	}

	i = 0; // index in a
	j = 0; // index in b
	k = 0; // index in merged

	// Always copy the smaller front element
	while (i < n1 && j < n2) {
		if (a[i] <= b[j]) {
			merged[k] = a[i];
			i++;
		} else {
			merged[k] = b[j];
			j++;
		}
		k++;
	}

	// Copy whatever is left in either array
	while (i < n1) {
		merged[k] = a[i];
		i++;
		k++;
	}
	while (j < n2) {
		merged[k] = b[j];
		j++;
		k++;
	}

	printf("\nMerged array: ");
	for (i = 0; i < k; i++) {
		printf("%d ", merged[i]);
	}
	printf("\n");

	return 0;
}
