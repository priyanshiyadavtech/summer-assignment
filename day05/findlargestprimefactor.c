
#include <stdio.h>
int main() {
    int num, i, maxPrime = -1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }
    if (maxPrime != -1)
        printf("The largest prime factor is: %d\n", maxPrime);
    else
        printf("No prime factors found.\n");
    return 0;
}