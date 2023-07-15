#include <stdio.h>
// Program to find reverse of a 4 digit no and checking if palindrome or not
int main() {
    int num, originalNum, reverseNum = 0, remainder;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    originalNum = num;

    // Reversing the number
    while (num != 0) {
        remainder = num % 10;
        reverseNum = reverseNum * 10 + remainder;
        num /= 10;
    }

    printf("Reverse of %d is: %d\n", originalNum, reverseNum);

    if (originalNum == reverseNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
