
#include <stdio.h>
// day2 assignment
int main() {
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n != 0) {
        sum += n % 10; // Add the last digit to sum
        n /= 10; // Remove the last digit
    }
    printf("The sum of the digits in the given number is: %d\n", sum);
    return 0;
}