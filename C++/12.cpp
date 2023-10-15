// wap to implement constructor and destructor.

#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }

    void displayMessage() {
        std::cout << "Hello from MyClass" << std::endl;
    }
};

int main() {
    std::cout << "Creating an object..." << std::endl;
    MyClass myObject; // Constructor is called when the object is created

    std::cout << "Calling a member function..." << std::endl;
    myObject.displayMessage();

    std::cout << "Object is about to be destroyed..." << std::endl;

    // Destructor is called when the object goes out of scope or is explicitly deleted

    return 0;
}
