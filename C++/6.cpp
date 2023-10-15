// wap to show function over loading using class.

#include <iostream>

class FunctionOverloadDemo {
public:
    void print(int num) {
        std::cout << "Integer: " << num << std::endl;
    }

    void print(double num) {
        std::cout << "Double: " << num << std::endl;
    }

    void print(std::string str) {
        std::cout << "String: " << str << std::endl;
    }
};

int main() {
    FunctionOverloadDemo demo;

    demo.print(42);           // Calls print(int num)
    demo.print(3.14);         // Calls print(double num)
    demo.print("Hello, C++"); // Calls print(std::string str)

    return 0;
}
