#include <stdio.h>
#include <string.h>

// Define a struct named "Person"
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    printf("Aryan Sharma\n");
    // Declare a variable of type "Person"
    struct Person p1;

    // Assign values to the fields of the struct
    strcpy(p1.name, "John");
    p1.age = 25;
    p1.height = 1.80;

    // Print out the values of the struct fields
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);

    return 0;
}
