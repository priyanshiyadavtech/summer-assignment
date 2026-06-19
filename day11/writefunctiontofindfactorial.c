
#include <stdio.h>
int factorial(int n) {
    if (n < 0) {
        return -1; // Factorial is not defined for negative numbers
    }
    if (n == 0 || n == 1) {
        return 1; // Factorial of 0 and 1 is 1
    }
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}