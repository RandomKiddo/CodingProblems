#include <stdio.h>

int main(void) {
	int sumSquare = 0, squareSum = 0;
	for (int i = 1; i <= 100; ++i) {
		int square = i * i;
		sumSquare += square;
	}
	for (int i = 1; i <= 100; ++i) {
		squareSum += i;
	}
	squareSum = squareSum * squareSum;
	int difference = squareSum - sumSquare;
	printf("Difference: %d", difference);
	return 0;
}