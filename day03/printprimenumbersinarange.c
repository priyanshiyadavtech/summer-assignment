
#include <stdio.h>
// day3 assignment
int main() {
    int start, end, i, j, isPrime;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers in the range %d to %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        if (i == 0 || i == 1) {
            continue;
        }
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}