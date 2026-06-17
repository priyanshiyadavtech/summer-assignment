
int main() {
    int num, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num > 0) {
        count += num & 1; // Increment count if the least significant bit is 1
        num >>= 1; // Right shift the bits of num by 1
    }
    printf("Number of set bits: %d\n", count);
    return 0;
}