// wap in c++ to show the use of inline function.

#include <iostream>

// Define an inline function to calculate the square of a number
inline int square(int num) {
    return num * num;
}

int main() {
    int num;
    
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Call the inline function to calculate the square
    int result = square(num);

    std::cout << "The square of " << num << " is " << result << std::endl;

    return 0;
}
