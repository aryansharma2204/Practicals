//WAP to enter two numbers from the user and print its HCF.
#include <stdio.h>

int main() {
    int num1, num2, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // find the HCF or GCD
    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("The HCF of %d and %d is %d.\n", num1, num2, hcf);

    return 0;
}
