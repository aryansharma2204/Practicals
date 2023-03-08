#include <stdio.h>

int main() {
    printf("Aryan Sharma\n");
    int num, reversed_num = 0, remainder, original_num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original_num = num;

    // Reversing the number
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    if (original_num == reversed_num) {
        printf("%d is a palindrome number.\n", original_num);
    } else {
        printf("%d is not a palindrome number.\n", original_num);
    }

    return 0;
}
