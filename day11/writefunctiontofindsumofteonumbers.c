
# include <stdio.h>

int findSum(int a, int b) {
    return a + b;
}

int main() {
    int sum = findSum(5, 10);
    printf("Sum: %d\n", sum);
    return 0;
}