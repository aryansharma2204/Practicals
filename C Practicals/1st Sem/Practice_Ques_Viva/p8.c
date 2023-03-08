//WAP to enter number from the user and check whether it is palindrome or not. 
#include <stdio.h>

int main() {
    int n, originalNumber, reverseNumber = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    originalNumber = n;

    // Reverse the number
    while(n != 0) {
        remainder = n % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        n /= 10;
    }

    // Check if the number is palindrome
    if(originalNumber == reverseNumber) {
        printf("%d is a palindrome number.", originalNumber);
    } else {
        printf("%d is not a palindrome number.", originalNumber);
    }

    return 0;
}
