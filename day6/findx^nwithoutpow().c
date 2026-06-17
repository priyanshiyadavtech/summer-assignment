
int main() {
    int x, n, result = 1;
    printf("Enter a number (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        result *= x; // Multiply result by x in each iteration
    }
    printf("%d raised to the power of %d is: %d\n", x, n, result);
    return 0;
}