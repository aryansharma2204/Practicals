//write a program to implement circular queues through arrays
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

typedef struct {
    int queue[MAX_SIZE];
    int front;
    int rear;
    int count;
} CircularQueue;

void initialize(CircularQueue* q) {
    q->front = 0;
    q->rear = -1;
    q->count = 0;
}

int isFull(CircularQueue* q) {
    return (q->count == MAX_SIZE);
}

int isEmpty(CircularQueue* q) {
    return (q->count == 0);
}

void enqueue(CircularQueue* q, int data) {
    if (isFull(q)) {
        printf("Queue is full. Cannot enqueue element.\n");
        return;
    }

    q->rear = (q->rear + 1) % MAX_SIZE;
    q->queue[q->rear] = data;
    q->count++;
    printf("Enqueued %d to the queue.\n", data);
}

int dequeue(CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return -1;
    }

    int data = q->queue[q->front];
    q->front = (q->front + 1) % MAX_SIZE;
    q->count--;
    printf("Dequeued %d from the queue.\n", data);
    return data;
}

int peek(CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot peek element.\n");
        return -1;
    }

    int data = q->queue[q->front];
    printf("Peeked %d from the queue.\n", data);
    return data;
}

void display(CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    int i;
    for (i = 0; i < q->count; i++) {
        int index = (q->front + i) % MAX_SIZE;
        printf("%d ", q->queue[index]);
    }
    printf("\n");
}

int main() {
    printf("Aryan Sharma\n");
    CircularQueue q;
    initialize(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    display(&q);

    peek(&q);

    dequeue(&q);
    dequeue(&q);

    display(&q);

    enqueue(&q, 60);
    enqueue(&q, 70);

    display(&q);

    return 0;
}
