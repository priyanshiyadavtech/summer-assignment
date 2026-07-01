
int isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int digit;

    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return sum == original;
}