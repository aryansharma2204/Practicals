//WAP to enter two numbers from the user and print the square of greatest number and cube of smaller one.
#include <stdio.h>

int main() {
    int a, b, max, min;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find the maximum and minimum numbers
    if(a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    // Print the square of the greatest number and cube of the smaller one
    printf("The square of the greatest number %d is %d\n", max, max*max);
    printf("The cube of the smaller number %d is %d", min, min*min*min);

    return 0;
}
