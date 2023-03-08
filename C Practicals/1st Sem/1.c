#include <stdio.h>

int main() {
    printf("Aryan Sharma\n");
   int num1, num2, sum, diff, prod, div, mod;
   
   // Ask user to input two numbers
   printf("Enter first number: ");
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);
   
   // Perform arithmetic operations
   sum = num1 + num2;
   diff = num1 - num2;
   prod = num1 * num2;
   div = num1 / num2;
   mod = num1 % num2;
   
   // Display results
   printf("Sum: %d\n", sum);
   printf("Difference: %d\n", diff);
   printf("Product: %d\n", prod);
   printf("Quotient: %d\n", div);
   printf("Remainder: %d\n", mod);

   return 0;
}
