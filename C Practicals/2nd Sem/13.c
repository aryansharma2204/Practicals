/*WAP to implement Student Database using Linked List with the following structure
 Name
 Rollno
 Marks of 5 subjects
 Average
 Result, If the average < 50, then print ‘Fail’, otherwise ‘Pass’*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char name[50];
    int rollNo;
    int marks[5];
    float average;
    char result[10];
    struct Node* next;
} Node;

Node* createNode(char name[], int rollNo, int marks[]) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->name, name);
    newNode->rollNo = rollNo;
    memcpy(newNode->marks, marks, sizeof(newNode->marks));

    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    newNode->average = sum / 5;

    if (newNode->average < 50)
        strcpy(newNode->result, "Fail");
    else
        strcpy(newNode->result, "Pass");

    newNode->next = NULL;

    return newNode;
}

void insertNode(Node** head, char name[], int rollNo, int marks[]) {
    Node* newNode = createNode(name, rollNo, marks);

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* curr = *head;
        while (curr->next != NULL)
            curr = curr->next;
        curr->next = newNode;
    }
}

void displayStudent(Node* student) {
    printf("Name: %s\n", student->name);
    printf("Roll No: %d\n", student->rollNo);
    printf("Marks: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", student->marks[i]);
    }
    printf("\n");
    printf("Average: %.2f\n", student->average);
    printf("Result: %s\n", student->result);
}

void displayDatabase(Node* head) {
    if (head == NULL) {
        printf("Database is empty.\n");
        return;
    }

    Node* curr = head;
    while (curr != NULL) {
        displayStudent(curr);
        printf("\n");
        curr = curr->next;
    }
}

void freeDatabase(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    printf("Aryan Sharma\n");
    Node* head = NULL;

    // Inserting student records into the database
    int marks1[] = {75, 80, 85, 90, 92};
    insertNode(&head, "John", 1, marks1);

    int marks2[] = {60, 70, 65, 55, 58};
    insertNode(&head, "Alice", 2, marks2);

    int marks3[] = {80, 85, 90, 78, 82};
    insertNode(&head, "Bob", 3, marks3);

    // Displaying the student database
    displayDatabase(head);

    // Free memory
    freeDatabase(head);

    return 0;
}
