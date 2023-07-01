//write a program to implement double ended queues through arrays
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

typedef struct {
    int deque[MAX_SIZE];
    int front;
    int rear;
    int count;
} Deque;

void initialize(Deque* dq) {
    dq->front = -1;
    dq->rear = -1;
    dq->count = 0;
}

int isFull(Deque* dq) {
    return (dq->count == MAX_SIZE);
}

int isEmpty(Deque* dq) {
    return (dq->count == 0);
}

void insertFront(Deque* dq, int data) {
    if (isFull(dq)) {
        printf("Deque is full. Cannot insert element at the front.\n");
        return;
    }

    if (dq->front == -1)
        dq->front = dq->rear = 0;
    else if (dq->front == 0)
        dq->front = MAX_SIZE - 1;
    else
        dq->front--;

    dq->deque[dq->front] = data;
    dq->count++;
    printf("Inserted %d at the front of the deque.\n", data);
}

void insertRear(Deque* dq, int data) {
    if (isFull(dq)) {
        printf("Deque is full. Cannot insert element at the rear.\n");
        return;
    }

    if (dq->rear == -1)
        dq->front = dq->rear = 0;
    else if (dq->rear == MAX_SIZE - 1)
        dq->rear = 0;
    else
        dq->rear++;

    dq->deque[dq->rear] = data;
    dq->count++;
    printf("Inserted %d at the rear of the deque.\n", data);
}

int deleteFront(Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty. Cannot delete element from the front.\n");
        return -1;
    }

    int data = dq->deque[dq->front];
    if (dq->front == dq->rear)
        dq->front = dq->rear = -1;
    else if (dq->front == MAX_SIZE - 1)
        dq->front = 0;
    else
        dq->front++;

    dq->count--;
    printf("Deleted %d from the front of the deque.\n", data);
    return data;
}

int deleteRear(Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty. Cannot delete element from the rear.\n");
        return -1;
    }

    int data = dq->deque[dq->rear];
    if (dq->front == dq->rear)
        dq->front = dq->rear = -1;
    else if (dq->rear == 0)
        dq->rear = MAX_SIZE - 1;
    else
        dq->rear--;

    dq->count--;
    printf("Deleted %d from the rear of the deque.\n", data);
    return data;
}

void display(Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty.\n");
        return;
    }

    printf("Deque elements: ");
    int i, j;
    for (i = dq->front, j = 0; j < dq->count; i = (i + 1) % MAX_SIZE, j++)
        printf("%d ", dq->deque[i]);

    printf("\n");
}

int main() {
    printf("Aryan Sharma\n");
    Deque dq;
    initialize(&dq);

    insertFront(&dq, 10);
    insertFront(&dq, 20);
    insertRear(&dq, 30);
    insertRear(&dq, 40);

    display(&dq);

    deleteFront(&dq);
    deleteRear(&dq);

    display(&dq);

    insertFront(&dq, 50);
    insertRear(&dq, 60);

    display(&dq);

    return 0;
}
   
