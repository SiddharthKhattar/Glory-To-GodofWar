#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* next;
} * ptr;

struct node* front = NULL;
struct node* rear = NULL;

void enqueue()
{
    int ele;
    char choice;
    do {
        ptr = (struct node*)malloc(sizeof(struct node));
        printf("Enter the element:");
        scanf("%d", &ele);
        ptr->info = ele;

        if (front == NULL && rear == NULL) {
            front = ptr;
            rear = ptr;
            rear->next = front;
        } else {
            rear->next = ptr;
            rear = ptr;
            rear->next = front;
        }
        printf("Enter the choice:");
        scanf("%s", &choice);

    } while (choice == 'y' || choice == 'Y');
}
void display()
{
    ptr = front;
    while (ptr != front) {
        printf("\n%d", ptr->info);
        ptr = ptr->next;
    }
}

int main()
{
    int x, choice;
    enqueue(x);
    enqueue(x);
    enqueue(x);
    enqueue(x);
    enqueue(x);

    printf("The front element is %d", front->info);
    printf("/nThe rear element is %d", rear->info);

    // display();
    return 0;
}
