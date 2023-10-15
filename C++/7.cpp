// wap to show return by reference by class.

#include <iostream>

class NumberHolder {
private:
    int number;

public:
    NumberHolder(int num) : number(num) {}

    // Return the number by reference
    int& getNumber() {
        return number;
    }
};

int main() {
    NumberHolder holder(42);

    std::cout << "Original number: " << holder.getNumber() << std::endl;

    // Modify the number directly through the reference
    holder.getNumber() = 100;

    std::cout << "Modified number: " << holder.getNumber() << std::endl;

    return 0;
}
