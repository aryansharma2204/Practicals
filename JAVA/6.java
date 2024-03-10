//write a program that declares a class(rectangle) using oops with data members length and breadth and member functions input, output and calculate area

import java.util.Scanner;

public class Rectangle {
    // Data members
    private double length;
    private double breadth;

    // Member function to input values
    public void input() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter length of rectangle: ");
        length = scanner.nextDouble();
        System.out.print("Enter breadth of rectangle: ");
        breadth = scanner.nextDouble();
        scanner.close();
    }

    // Member function to output values
    public void output() {
        System.out.println("Length: " + length);
        System.out.println("Breadth: " + breadth);
    }

    // Member function to calculate area
    public void calculateArea() {
        double area = length * breadth;
        System.out.println("Area of the rectangle: " + area);
    }

    public static void main(String[] args) {
        // Creating an object of Rectangle class
        Rectangle rectangle = new Rectangle();

        // Calling member functions
        rectangle.input();
        rectangle.output();
        rectangle.calculateArea();
    }
}
