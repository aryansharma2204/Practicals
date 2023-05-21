#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!");
        return NULL;
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
void insertNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        *head = newNode;
    }
}

// Function to traverse and print the linked list
void traverseLinkedList(struct Node* head) {
    struct Node* currentNode = head;
    while (currentNode != NULL) {
        printf("%d -> ", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Insert nodes at the beginning of the linked list
    insertNode(&head, 5);
    insertNode(&head, 3);
    insertNode(&head, 8);
    insertNode(&head, 2);

    // Traverse and print the linked list
    printf("Linked List: ");
    traverseLinkedList(head);

    return 0;
}
