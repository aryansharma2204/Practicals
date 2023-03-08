#include <stdio.h>

int main() {
    printf("Aryan Sharma\n");
    int num1, num2, num3, greatest;

    // Ask user for three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find greatest number
    if (num1 >= num2 && num1 >= num3) {
        greatest = num1;
    }
    else if (num2 >= num1 && num2 >= num3) {
        greatest = num2;
    }
    else {
        greatest = num3;
    }

    // Display result
    printf("The greatest number is: %d", greatest);

    return 0;
}
