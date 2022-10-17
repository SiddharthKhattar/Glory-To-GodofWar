#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};

struct node *top = NULL;

int isEmpty() {
    if (top == NULL) {
        return 1;
    } else {
        return 0;
    }
}

int push(int num) {
    struct node *ptr;
    ptr = (struct node *) malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Error allocating memory!\n");
        return 0;
    }
    ptr -> info = num;
    ptr -> next = top;
    top = ptr;
    return ptr -> info;
}

int pop() {
    int elem;
    if (top != NULL) {
        elem = top -> info;
        struct node *ptr;
        ptr = top;
        top = top -> next;
        free(ptr);
        return elem;
    } else {
        printf("Empty stack!");
    }
}

int peek() {
    if (!isEmpty())
        return top -> info;
    else
        printf("Empty stack!\n");
}

int main() {
    int i;
    
    for (i=0; i <= 10; i++) {
        printf("Element pushed to top of stack is: %d\n", push(i));
    }

    printf("\nIs stack empty? : ");
    printf(isEmpty() ? "YES\n" : "NO\n");
    printf("Topmost element of stack: %d\n\n", peek());

    while (!isEmpty()) {
        printf("Element popped from stack: %d\n", pop());
    }
    printf("Is stack empty? : ");
    printf(isEmpty() ? "YES\n" : "NO\n");
}
