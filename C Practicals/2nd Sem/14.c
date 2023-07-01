//write a program to show array representations of stacks
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct {
    int stack[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack* s) {
    s->top = -1;
}

int isFull(Stack* s) {
    return (s->top == MAX_SIZE - 1);
}

int isEmpty(Stack* s) {
    return (s->top == -1);
}

void push(Stack* s, int data) {
    if (isFull(s)) {
        printf("Stack is full. Cannot push element.\n");
        return;
    }

    s->top++;
    s->stack[s->top] = data;
    printf("Pushed %d to the stack.\n", data);
}

int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot pop element.\n");
        return -1;
    }

    int data = s->stack[s->top];
    s->top--;
    printf("Popped %d from the stack.\n", data);
    return data;
}

int peek(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot peek element.\n");
        return -1;
    }

    int data = s->stack[s->top];
    printf("Peeked %d from the stack.\n", data);
    return data;
}

void display(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->stack[i]);
    }
    printf("\n");
}

int main() {
    printf("Aryan Sharma\n");
    Stack s;
    initialize(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    display(&s);

    peek(&s);

    pop(&s);
    pop(&s);
    pop(&s);

    display(&s);

    return 0;
}
