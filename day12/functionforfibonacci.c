
int isFibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    int a = 0, b = 1, c;
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }

    return c == n;
}