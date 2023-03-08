#include <stdio.h>
#include <stdlib.h>

// Define a struct named "Person"
struct Person {
    char name[50];
    int age;
};

int main() {
    printf("Aryan Sharma\n");
    // Declare a variable of type "Person" pointer
    struct Person *p1;

    // Dynamically allocate memory for the struct
    p1 = (struct Person*) malloc(sizeof(struct Person));

    // Prompt the user to enter name and age
    printf("Enter your name: ");
    scanf("%s", p1->name);

    printf("Enter your age: ");
    scanf("%d", &p1->age);

    // Print out the values of the struct fields
    printf("Name: %s\n", p1->name);
    printf("Age: %d\n", p1->age);

    // Free the memory allocated for the struct
    free(p1);

    return 0;
}
