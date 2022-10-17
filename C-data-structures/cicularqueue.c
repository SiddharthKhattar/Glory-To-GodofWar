#include <stdio.h>
#define SIZE 10

int enqueue(int elem);
int dequeue(void);
int show_queue(void);

int queue[SIZE];
int front=-1, rear=-1;

int main() {
    int i;

    for (i = 0; i <= 11; i++) {
        printf("Enqueued element: %d\n", enqueue(i));
    }
    
    show_queue();

    for (i = 0; i <= 5; i++) {
        printf("Dequeued element: %d\n", dequeue());
    }

    show_queue();

    for(i = 0; i < 4; i++) {
        printf("Enqueued element: %d\n", enqueue(i));
    }

    show_queue();

    return 0;
}

int enqueue(int elem) {
    if (front == -1 && rear == -1) {
        front = rear = 0;
    } else if ((rear + 1) % SIZE == front) {
        printf("ERROR: Overflow.\n");
        return 0;
    } else {
        rear = (rear+1) % SIZE;
    }
    queue[rear] = elem;
    return elem;
}

int dequeue(void) {
    int elem;

    if (front == -1 && rear == -1) {
        printf("ERROR: Underflow.\n");
        return 0;
    } else if (front == rear) {
        elem = queue[front];
        front = rear = -1;
        return elem;
    } else {
        elem = queue[front];
        front = (front+1) % SIZE;
        return elem;
    }
}

int show_queue(void) {
    int i;

    for (i = front; i != rear; i = (i + 1) % SIZE) {
        printf("%d, ", queue[i]);
    }
    printf("%d\n", queue[i]);

    return 0;
}
