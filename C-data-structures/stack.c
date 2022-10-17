#include <stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

int isFull() {
    if (top == MAX_SIZE -1) {
        return 1;
    } else if (top < MAX_SIZE - 1) {
        return 0;
    }
}

int isEmpty() {
    if (top == -1 || top == NULL) {
        return 1;
    }
    return 0;
}

int push(int elem) {
    if (!isFull()) {
        top++;
        stack[top] = elem;
        return elem;
    } else {
        printf("Stack is full!\n");
    }
}

int pop() {
    int ele;

    if  (!isEmpty()) {
        if (top != NULL || top > -1) {
            ele = stack[top];
            top--;
            return ele;
        }
    } else {
        printf("Stack is empty! \n");
    }
}

int peek() {
    if (!(top == -1 || top == NULL)) {
        return stack[top];
    }
}

int main() {
    int i=0;

    // push items to top of stack :
    while (!isFull()) {
        printf("Element pushed to stack: %d\n", push(i));
        i++;
    }
    printf("\n");
    
    // peek at topmost element
    printf("Top most element is: %d\n", peek());
    printf("\n");

    // check if stack full
    printf(isFull() ? "Stack is full!\n" : "Stack is empty!\n");
    
    printf("\n");
    // pop all items from stack 
    while (!isEmpty()) {
        printf("Element popped from stack: %d\n", pop());
    }

    return 0;
}

