
#include <stdio.h>
// day2 assignment
int main() {
    int num, original, rebverse = 0, remainder;
    printf("Enter the number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        remainder = num % 10;
        rebverse = rebverse * 10 + remainder;
        num /= 10;
    }
    if (original == rebverse) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}