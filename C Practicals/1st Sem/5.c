#include <stdio.h>

int main() {
    printf("Aryan Sharma\n");
    int choice, num1, num2, result;

    // Display menu and get user's choice
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Get user input for two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform calculation based on user's choice
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %d", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %d", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %d", result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: division by zero");
            }
            else {
                result = num1 / num2;
                printf("Result: %d", result);
            }
            break;
        case 5:
            if (num2 == 0) {
                printf("Error: division by zero");
            }
            else {
                result = num1 % num2;
                printf("Result: %d", result);
            }
            break;
        default:
            printf("Invalid choice");
            break;
    }

    return 0;
}
