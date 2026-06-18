
#include <stdio.h>
// day3 assignment
int main() {
    int a, b, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        gcd = b;
        b = a % b;
        a = gcd;
    }
    printf("GCD of %d and %d is: %d\n", a, b, gcd);
    return 0;
}