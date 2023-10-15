// wap to implement constructor overloading.

#include <iostream>

class MyClass {
private:
    int value;

public:
    // Default constructor with no parameters
    MyClass() {
        value = 0;
    }

    // Constructor with one parameter
    MyClass(int val) {
        value = val;
    }

    // Constructor with two parameters
    MyClass(int val1, int val2) {
        value = val1 + val2;
    }

    void displayValue() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyClass obj1; // Calls the default constructor
    MyClass obj2(5); // Calls the constructor with one parameter
    MyClass obj3(2, 3); // Calls the constructor with two parameters

    obj1.displayValue(); // Display 0
    obj2.displayValue(); // Display 5
    obj3.displayValue(); // Display 5

    return 0;
}
