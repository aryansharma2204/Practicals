// wap to show the use of static variable and static function.

#include <iostream>

class MyClass {
public:
    static int staticVariable; // Static variable

    MyClass() {
        staticVariable++; // Increment the static variable on each object creation
    }

    static void staticFunction() {
        std::cout << "This is a static function." << std::endl;
    }
};

// Initialize the static variable outside the class
int MyClass::staticVariable = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    // Access the static variable using the class name
    std::cout << "Static variable value: " << MyClass::staticVariable << std::endl;

    // Call the static function using the class name
    MyClass::staticFunction();

    return 0;
}
