
#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next, c;
    printf("Enter the position of the term in Fibonacci series: ");
    scanf("%d", &n);
    for (c = 0; c < n; c++) {
        if (c <= 1)
            next = c;
        else {
            next = first + second;
            first = second;
            second = next;
        }
    }
    printf("The %dth term in Fibonacci series is %d\n", n, next);
    return 0;
}