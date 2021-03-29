#include <stdio.h>

int main(void) {
	int found = 0;
	int a, b, c;
	for (a = 1; a < 1000/3; ++a) {
		for (b = a; b < 1000/2; ++b) {
			c = 1000 - a - b;
			if (a*a + b*b == c*c) {
				found = 1;
				break;
			}
		}
		if (found == 1) {
			break;
		}
	}
	printf("a: %d, b: %d, c: %d", a, b, c);
	return 0;
}