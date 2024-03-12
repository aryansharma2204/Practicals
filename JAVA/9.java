/*Write a program to demonstrate the use of static variable, static method and
static block.*/

import java.util.Scanner;

class Student {
    private String name;
    private static String collegeName;
    private static int studentCount = 0;

    // Static block to initialize static variables
    static {
        collegeName = "XYZ College"; // Setting default college name
        System.out.println("Static block executed.");
    }

    // Constructor to initialize student name
    public Student(String name) {
        this.name = name;
        studentCount++; // Incrementing student count
    }

    // Static method to display college details
    public static void displayCollegeDetails() {
        System.out.println("College Name: " + collegeName);
        System.out.println("Total Students: " + studentCount);
    }

    // Getter method for student name
    public String getName() {
        return name;
    }
}

public class StudentDemo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Creating student objects
        Student student1 = new Student("Alice");
        Student student2 = new Student("Bob");

        // Displaying college details
        Student.displayCollegeDetails();

        // Getting and displaying student names
        System.out.println("Student 1 Name: " + student1.getName());
        System.out.println("Student 2 Name: " + student2.getName());

        scanner.close();
    }
}
