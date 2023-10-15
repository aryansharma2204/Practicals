// wap to illustrate the use of passing object as function argument and returning the object.

#include <iostream>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double r, double i) : real(r), imaginary(i) {}

    // Add two complex numbers and return the result as a new object
    ComplexNumber add(const ComplexNumber& other) {
        double newReal = real + other.real;
        double newImaginary = imaginary + other.imaginary;
        return ComplexNumber(newReal, newImaginary);
    }

    // Display the complex number
    void display() {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    ComplexNumber num1(3.0, 4.0);
    ComplexNumber num2(1.5, 2.5);

    std::cout << "Complex Number 1: ";
    num1.display();

    std::cout << "Complex Number 2: ";
    num2.display();

    ComplexNumber sum = num1.add(num2); // Pass an object as an argument and return an object
    std::cout << "Sum of Complex Numbers: ";
    sum.display();

    return 0;
}
