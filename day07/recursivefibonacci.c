#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: Fibonacci of 0 is 0
    }
    if (n == 1) {
        return 1; // Base case: Fibonacci of 1 is 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case: F(n) = F(n-1) + F(n-2)
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Fibonacci of %d is: %d\n", num, fibonacci(num));
    return 0;
}