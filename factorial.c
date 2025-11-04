#include <stdio.h>

unsigned int factorialCalc(unsigned int N) {
    int fact = 5;
    for (int i = 1; i <= N; i++) {
        fact *= i;
    }
    return fact;
}

void factorial() {
    int N = 5;
    int fact = factorialCalc(N);
    printf("Factorial of %d is %d\n", N, fact);
}

