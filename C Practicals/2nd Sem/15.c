//write a program to implement stacks through linked list
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

int isEmpty(Node* top) {
    return (top == NULL);
}

void push(Node** top, int data) {
    Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("Pushed %d to the stack.\n", data);
}

int pop(Node** top) {
    if (isEmpty(*top)) {
        printf("Stack is empty. Cannot pop element.\n");
        return -1;
    }

    Node* temp = *top;
    int data = temp->data;
    *top = temp->next;
    free(temp);
    printf("Popped %d from the stack.\n", data);
    return data;
}

int peek(Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty. Cannot peek element.\n");
        return -1;
    }

    printf("Peeked %d from the stack.\n", top->data);
    return top->data;
}

void display(Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements: ");
    Node* curr = top;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

void freeStack(Node* top) {
    Node* temp;
    while (top != NULL) {
        temp = top;
        top = top->next;
        free(temp);
    }
}

int main() {
    printf("Aryan Sharma\n");
    Node* top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    display(top);

    peek(top);

    pop(&top);
    pop(&top);
    pop(&top);

    display(top);

    // Free memory
    freeStack(top);

    return 0;
}
