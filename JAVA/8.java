/*Write a program to demonstrate use of method overloading to calculate area of
square, rectangle and triangle.*/

import java.util.Scanner;

public class AreaCalculator {
    // Method to calculate area of square
    public static double calculateArea(double side) {
        return side * side;
    }

    // Method to calculate area of rectangle
    public static double calculateArea(double length, double breadth) {
        return length * breadth;
    }

    // Method to calculate area of triangle
    public static double calculateArea(double base, double height) {
        return 0.5 * base * height;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Area of square
        System.out.print("Enter side length of the square: ");
        double side = scanner.nextDouble();
        System.out.println("Area of square: " + calculateArea(side));

        // Area of rectangle
        System.out.print("\nEnter length of the rectangle: ");
        double length = scanner.nextDouble();
        System.out.print("Enter breadth of the rectangle: ");
        double breadth = scanner.nextDouble();
        System.out.println("Area of rectangle: " + calculateArea(length, breadth));

        // Area of triangle
        System.out.print("\nEnter base length of the triangle: ");
        double base = scanner.nextDouble();
        System.out.print("Enter height of the triangle: ");
        double height = scanner.nextDouble();
        System.out.println("Area of triangle: " + calculateArea(base, height));

        scanner.close();
    }
}
