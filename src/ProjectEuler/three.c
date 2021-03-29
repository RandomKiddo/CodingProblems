#include <stdio.h>

int main(void) {
    const long NUMBER = 600851475143;
    long factor = 0;
    long factors[2];
    for (long i = 2; i*i < NUMBER; ++i) {
        if (NUMBER % i == 0) {
            factors[0] = i;
            factors[1] = NUMBER / i;
            for (int k = 0; k < 2; ++k) {
                int isPrime = 1;
                for (long j = 2; j*j < factors[k]; ++j) {
                    if (factors[k] % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime == 1 && factors[k] > factor) {
                    factor = factors[k];
                }
            }
        }
    }
    printf("Largest Factor: %d", factor);
    return 0;
}
