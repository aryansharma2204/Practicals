// wap to swap two numbers using call by value and call by reference using class.

#include <iostream>

class NumberSwapper {
public:
    void swapByValue(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
        std::cout << "Swapped using Call by Value:" << std::endl;
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }

    void swapByReference(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
        std::cout << "Swapped using Call by Reference:" << std::endl;
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }
};

int main() {
    int num1 = 5;
    int num2 = 10;

    NumberSwapper swapper;

    std::cout << "Original values:" << std::endl;
    std::cout << "num1: " << num1 << ", num2: " << num2 << std::endl;

    swapper.swapByValue(num1, num2); // Call by value swap
    std::cout << "After Call by Value swap:" << std::endl;
    std::cout << "num1: " << num1 << ", num2: " << num2 << std::endl; // Values remain unchanged

    swapper.swapByReference(num1, num2); // Call by reference swap
    std::cout << "After Call by Reference swap:" << std::endl;
    std::cout << "num1: " << num1 << ", num2: " << num2 << std::endl; // Values are swapped

    return 0;
}
