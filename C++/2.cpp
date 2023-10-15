// wap to access global variables using scope resolution operator.

#include <iostream>

int globalVariable = 10; // Global variable

int main() {
    int globalVariable = 5; // Local variable with the same name as the global variable

    std::cout << "Local variable: " << globalVariable << std::endl;
    std::cout << "Global variable: " << ::globalVariable << std::endl; // Access global variable using the scope resolution operator

    return 0;
}
