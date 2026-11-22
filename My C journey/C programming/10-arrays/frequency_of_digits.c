#include<stdio.h>

int main() {
	int number, digit;
	int freq[10] = {0}; // freq[d] counts how many times digit d appears

	printf("Enter a non-negative integer: ");
	if (scanf("%d", &number) != 1 || number < 0) {
		printf("Invalid input. Enter a number that is 0 or more.\n");
		return 1;
	}

	if (number == 0) {
		freq[0] = 1; // the loop below would skip 0
	}

	while (number > 0) {
		digit = number % 10; // last digit
		freq[digit]++;
		number = number / 10;
	}

	printf("\nDigit frequencies:\n");
	for (digit = 0; digit <= 9; digit++) {
		if (freq[digit] > 0) {
			printf("%d appears %d time(s)\n", digit, freq[digit]);
		}
	}

	return 0;
}
