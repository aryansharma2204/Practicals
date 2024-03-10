//write a program to enter number from user and check whether it is Armstrong or palindrome.

import java.util.Scanner;

public class NumberCheck {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        int originalNumber = number;
        int reverse = 0;
        int sum = 0;
        int digit;

        // Check if the number is Armstrong
        while (number > 0) {
            digit = number % 10;
            sum += digit * digit * digit; // For Armstrong check, cube of digits
            number /= 10;
        }

        if (sum == originalNumber) {
            System.out.println(originalNumber + " is an Armstrong number.");
        } else {
            System.out.println(originalNumber + " is not an Armstrong number.");
        }

        // Check if the number is a palindrome
        number = originalNumber; // Reset number to the original value for palindrome check
        while (number > 0) {
            digit = number % 10;
            reverse = reverse * 10 + digit;
            number /= 10;
        }

        if (reverse == originalNumber) {
            System.out.println(originalNumber + " is a palindrome.");
        } else {
            System.out.println(originalNumber + " is not a palindrome.");
        }

        scanner.close();
    }
}
