
#include <stdio.h>
// day2 assignment
int main() {
    int n, reverse = 0,remainder;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    printf("The reversed number is: %d\n", reverse);
    return 0;

}