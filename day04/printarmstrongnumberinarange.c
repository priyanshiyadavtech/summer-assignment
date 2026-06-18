
#include <stdio.h>
int main() {
    int start, end, num, originalNum, remainder, result = 0;
    printf("Enter the range (starting and ending numbers): ");
    scanf("%d %d", &start, &end);
    printf("Armstrong numbers in the range %d to %d are: ", start, end);
    for (num = start; num <= end; num++) {
        originalNum = num;
        result = 0;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }
        if (result == num)
            printf("%d ", num);
    }
    printf("\n");
    return 0;
}