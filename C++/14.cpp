// wap to show use of copy constructor.

#include <iostream>

class MyString {
private:
    char* str;

public:
    // Constructor to initialize a string
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy constructor
    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }

    // Display the string
    void display() {
        std::cout << "String: " << str << std::endl;
    }
};

int main() {
    MyString original("Hello, World!");

    MyString copied = original; // Calls the copy constructor

    original.display();
    copied.display();

    return 0;
}
