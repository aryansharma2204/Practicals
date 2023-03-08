//WAP to print the factorial of a number entered by the user.
#include <stdio.h>

int main() {
    int num, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the factorial of the number
    for(i=1; i<=num; ++i) {
        fact *= i;
    }

    printf("The factorial of %d is %lld", num, fact);

    return 0;
}
