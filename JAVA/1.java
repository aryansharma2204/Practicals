//write a program to show the use of scanner class by entering 10 numbers from user and printing greatest number.

import java.util.Scanner;

public class GreatestNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter 10 numbers:");

        // Initialize variable to hold the greatest number
        int greatest = Integer.MIN_VALUE;

        for (int i = 0; i < 10; i++) {
            System.out.print("Enter number " + (i + 1) + ": ");
            int num = scanner.nextInt();

            // Check if the entered number is greater than the current greatest number
            if (num > greatest) {
                greatest = num;
            }
        }

        System.out.println("The greatest number entered is: " + greatest);

        // Close the scanner to prevent resource leak
        scanner.close();
    }
}
