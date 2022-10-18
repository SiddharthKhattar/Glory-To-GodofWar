#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10

int queue[10];
int front=-1, rear=-1;

int enqueue(int elem);
int dequeue(void);
int display(void);
int randgen();

int main() {
    int i;
    srand(time(NULL));

    for (i = SIZE + 1; i >= 0; i--) {
        printf("Enqueued element is : %d\n", enqueue(randgen(i)));
        display();
        printf("Front: %d \t Rear: %d\n", front, rear);
        printf("\n");
    }

    for (i = SIZE + 1; i >= 0; i--) {
        printf("Dequeued element is : %d\n", dequeue());
        display();
        printf("Front: %d \t Rear: %d\n", front, rear);
        printf("\n");
    }

    return 0;
}

int enqueue(int elem) {
    int i;

    if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = elem;
    } else if (rear == SIZE - 1) {
        printf("Error: Queue overflow!\n");
        return 0;
    } else {
        for (i = rear; i >= 0; i--) {
            if (queue[i] > elem) {
                queue[i+1] = queue[i];
            } else {
                break;
            }
        }
        rear++;
        queue[i+1] = elem;
    }
    return elem;
}

int dequeue(void) {
    int elem;
    if (front == -1 && rear == -1) {
        printf("Error: Queue underflow!\n");
        return 0;
    } else if (front == rear) {
        elem = queue[front];
        front = rear = -1;
    } else {
        elem = queue[front++];
    }
    return elem;
}

int display (void) {
    int i;

    for (i = front; i <= rear; i++) {
        printf(i == rear ? "%d\n" : "%d, ", queue[i]);
    }
    return 0;
}

int randgen() {
    return rand() % 300 + 1;
}
