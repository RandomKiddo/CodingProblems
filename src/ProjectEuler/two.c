#include <stdio.h>

int main(void) {
    int sum = 0;
    int lastTerm = 1;
    for (int i = 1; i < 4000000; i += lastTerm) {
        if (i % 2 == 0) {
            sum += i;
        }
        lastTerm = i;
    }
    printf("Sum: %d", sum);
    return 0;
}
