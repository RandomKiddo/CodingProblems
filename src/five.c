#include <stdio.h>

int main(void) {
	int smallest = 40;
	int i = 10;
	while (i < 20) {
		if (smallest % i == 0) {
			++i;
			continue;
		} else {
			i = 10;
			smallest += 20;
		}
	}
	printf("Smallest Multiple: %d", smallest);
	return 0;
}
