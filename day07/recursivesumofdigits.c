#include <stdio.h>
int sumOfDigits(int n) {
    if (n == 0) {
        return 0; // Base case: sum of digits of 0 is 0
    }
    return (n % 10) + sumOfDigits(n / 10); // Recursive case: add last digit to sum of remaining digits
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is: %d\n", num, sumOfDigits(num));
    return 0;
}