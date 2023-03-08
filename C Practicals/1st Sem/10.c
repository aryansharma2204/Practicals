#include <stdio.h>

int main() {
    printf("Aryan Sharma\n");
    int marks[10], i;
    float sum = 0.0, average;

    // Getting marks of 10 students
    printf("Enter marks of 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    // Calculating average marks
    average = sum / 10;

    // Displaying the average marks
    printf("Average marks = %.2f\n", average);

    return 0;
}
