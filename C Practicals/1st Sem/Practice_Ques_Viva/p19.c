//WAP to show the working of nested structures.
#include <stdio.h>

// define nested structure
struct date {
    int day;
    int month;
    int year;
};

struct employee {
    char name[50];
    int emp_id;
    float salary;
    struct date joining_date; // nested structure
};

int main() {
    struct employee emp1;

    printf("Enter employee name: ");
    scanf("%s", emp1.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp1.emp_id);

    printf("Enter employee salary: ");
    scanf("%f", &emp1.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &emp1.joining_date.day, &emp1.joining_date.month, &emp1.joining_date.year);

    // print employee details
    printf("\nEmployee Details\n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.emp_id);
    printf("Salary: %f\n", emp1.salary);
    printf("Joining Date: %d/%d/%d\n", emp1.joining_date.day, emp1.joining_date.month, emp1.joining_date.year);

    return 0;
}
