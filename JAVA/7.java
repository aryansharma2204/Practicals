/*
Create a class employee which have name, age and address of employee, include
methods getdata() and showdata(), getdata() takes the input from the user,
showdata() display the data in following format:
Name:
Age:
Address:
*/

import java.util.Scanner;

public class Employee {
    private String name;
    private int age;
    private String address;

    // Method to get data from the user
    public void getData() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter name of the employee: ");
        name = scanner.nextLine();

        System.out.print("Enter age of the employee: ");
        age = scanner.nextInt();
        scanner.nextLine(); // Consume newline character after reading int

        System.out.print("Enter address of the employee: ");
        address = scanner.nextLine();

        scanner.close();
    }

    // Method to display data
    public void showData() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Address: " + address);
    }

    public static void main(String[] args) {
        Employee employee = new Employee();
        employee.getData();
        System.out.println("\nEmployee Details:");
        employee.showData();
    }
}
