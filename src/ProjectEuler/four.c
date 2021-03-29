#include <stdio.h>

int palindrome(int number);

int main(void) {
	int max = 0;
	for (int i = 100; i < 1000; ++i) {
		for (int j = 100; j < 1000; ++j) {
			int result = i * j;
			int reverse = palindrome(result);
			if (result == reverse && result > max) {
				max = result;
			}
		}
	}
	printf("Max: %d", max);
	return 0;
}

int palindrome(int number) {
	int remainder = 0;
	int reversed = 0;
	while (number != 0) {
		remainder = number % 10;
		reversed = reversed*10 + remainder;
		number /= 10;
	}
	return reversed;
}