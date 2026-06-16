
#include <stdio.h>
// day2 assignment
int main() {
    int num, digit, product = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }
    printf("The product of the digits in the given number is: %d\n", product);
    return 0;
}