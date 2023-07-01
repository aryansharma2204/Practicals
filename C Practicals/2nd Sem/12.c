/*Write a C program to create two linked lists from a given list in following way
INPUT List:- 1 2 3 4 5 6 7 8 9 10
OUTPUT:- FirstList:- 13579
 Second List:- 2 4 6 8 10*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertNode(Node** head, int data) {
    Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* curr = *head;
        while (curr->next != NULL)
            curr = curr->next;
        curr->next = newNode;
    }
}

void splitList(Node* head, Node** firstList, Node** secondList) {
    Node* curr = head;
    int count = 1;

    while (curr != NULL) {
        if (count % 2 == 1) {
            insertNode(firstList, curr->data);
        } else {
            insertNode(secondList, curr->data);
        }

        curr = curr->next;
        count++;
    }
}

void displayList(Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node* curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

void freeList(Node* head) {
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
    Node* firstList = NULL;
    Node* secondList = NULL;

    // Create the linked list from the given input list
    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);
    insertNode(&head, 4);
    insertNode(&head, 5);
    insertNode(&head, 6);
    insertNode(&head, 7);
    insertNode(&head, 8);
    insertNode(&head, 9);
    insertNode(&head, 10);

    printf("Input List: ");
    displayList(head);

    // Split the list into two lists
    splitList(head, &firstList, &secondList);

    printf("First List: ");
    displayList(firstList);

    printf("Second List: ");
    displayList(secondList);

    // Free memory
    freeList(head);
    freeList(firstList);
    freeList(secondList);

    return 0;
}
