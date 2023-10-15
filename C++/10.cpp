// wap to implement friend function.

#include <iostream>

class MyClass;

class MyFriendClass {
public:
    void AccessPrivateData(const MyClass& obj);
};

class MyClass {
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}

    // Declare MyFriendClass as a friend class of MyClass
    friend class MyFriendClass;
};

void MyFriendClass::AccessPrivateData(const MyClass& obj) {
    std::cout << "Accessing private data from MyFriendClass: " << obj.privateData << std::endl;
}

int main() {
    MyClass myObject(42);
    MyFriendClass friendObj;

    // Attempting to access privateData directly from main will result in a compilation error.
    // Uncommenting the following line will produce an error.
    // std::cout << "Accessing private data from the main function: " << myObject.privateData << std::endl;

    friendObj.AccessPrivateData(myObject); // Access private data using a friend class

    return 0;
}
