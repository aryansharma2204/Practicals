// wap to create a class employee and perform following operations for 5 employees. (a) Enter employee ID, Name, Department , Age,  Basic Salary,  Bonus from the user.  (b)Calculate total salary as basic salary + bonus.  (c)Display all the details of the employee in the following format:- Employee ID: next line Name: next line Department: .

#include <iostream>
#include <string>

class Employee {
private:
    int employeeID;
    std::string name;
    std::string department;
    int age;
    double basicSalary;
    double bonus;
    double totalSalary;

public:
    void enterDetails() {
        std::cout << "Enter Employee ID: ";
        std::cin >> employeeID;

        std::cin.ignore(); // Clear the input buffer
        std::cout << "Enter Name: ";
        std::getline(std::cin, name);

        std::cout << "Enter Department: ";
        std::cin >> department;

        std::cout << "Enter Age: ";
        std::cin >> age;

        std::cout << "Enter Basic Salary: ";
        std::cin >> basicSalary;

        std::cout << "Enter Bonus: ";
        std::cin >> bonus;

        // Calculate total salary
        totalSalary = basicSalary + bonus;
    }

    void displayDetails() {
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Department: " << department << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Basic Salary: " << basicSalary << std::endl;
        std::cout << "Bonus: " << bonus << std::endl;
        std::cout << "Total Salary: " << totalSalary << std::endl;
        std::cout << std::endl;
    }
};

int main() {
    Employee employees[5]; // Create an array of Employee objects for 5 employees

    for (int i = 0; i < 5; i++) {
        std::cout << "Enter details for Employee " << (i + 1) << ":" << std::endl;
        employees[i].enterDetails();
    }

    std::cout << "Employee Details:" << std::endl;
    for (int i = 0; i < 5; i++) {
        employees[i].displayDetails();
    }

    return 0;
}
