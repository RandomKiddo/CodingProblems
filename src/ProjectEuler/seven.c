#include <stdio.h>

int isPrime(int num);

int main(void) {
	int num = 2;
	int count = 0;
	while (count != 10001) {
		if (isPrime(num)) {
			++count;
		}
		++num;
	}
	printf("Prime: %d", --num);
	return 0;
}

int isPrime(int num) {
	int flag = 1;
	for (int i = 2; i <= num / 2; ++i) {
		if (num % i == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}