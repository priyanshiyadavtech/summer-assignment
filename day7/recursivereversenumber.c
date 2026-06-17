
int reverseNumber(int n) {
    if (n == 0) {
        return 0; // Base case: reverse of 0 is 0
    }
    int lastDigit = n % 10; // Get the last digit
    int remainingNumber = n / 10; // Get the remaining number
    return lastDigit * pow(10, (int)log10(remainingNumber) + 1) + reverseNumber(remainingNumber); // Recursive case: place last digit in front and reverse the remaining number
}
#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Reverse of %d is: %d\n", num, reverseNumber(num));
    return 0;
}