// wap to create a class to enter details of students and displaying them.

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    int age;

public:
    void setDetails(std::string studentName, int studentRollNumber, int studentAge) {
        name = studentName;
        rollNumber = studentRollNumber;
        age = studentAge;
    }

    void displayDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    Student student1;

    // Enter details for the student
    student1.setDetails("John Doe", 12345, 20);

    // Display the student's details
    std::cout << "Student Details:" << std::endl;
    student1.displayDetails();

    return 0;
}
