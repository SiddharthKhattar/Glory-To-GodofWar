#include <stdio.h>
#include <stdlib.h>
#define N 5
int que[N], ele;
int front = -1;
int rear = -1;
void dequeue()
{
    if (front == -1 && rear == -1)
        printf("Queue is empty");
    else {
        if (rear == front) {
            printf("Deleted element is %d", que[rear]);
            front = -1;
            rear = -1;
        } else if (front == N - 1) {
            printf("Deleted element is %d", que[front]);
            front = 0;
        } else {
            printf("Deleted element is %d", que[front++]);
        }
    }
}

int enqueue()
{
    int ele;
    printf("Enter the element to insert in the queue:");
    scanf("%d", &ele);
    if ((front == 0 && rear == N - 1) || rear + 1 == front)
        printf("Queue is full");
    else if (front == -1 && rear == -1) {
        rear = (rear + 1) % N;
        que[rear] = ele;
        front = 0;
        printf("%d is inserted", ele);
    } else if (front != 0 && rear == N - 1) {
        rear = (rear + 1) % N;
        que[rear] = ele;
        printf("%d is inserted", ele);
    } else if (rear + 1 != front) {
        rear = (rear + 1) % N;
        que[rear] = ele;
        printf("%d is inserted", ele);
    }
    return ele;
}
int main()
{
    int choice;
    while (1) {
        printf("\nEnter 1 to insert element in the queue");
        printf("\nEnter 2 to delete an element from the queue");
        printf("\nEnter 3 to exit");
        printf("\nEnter the choice:");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            enqueue(ele);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            exit(0);
            break;

        default:
            printf("Wrong input");
        }
        printf("\n");
    }
    return 0;
}