#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};

int main() {
    struct node *first, *temp, *head;
    int i, n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);
    
    first = (struct node *) malloc(sizeof(struct node));

    printf("Enter data for node 1: ");
    scanf("%d", &(first -> info));

    first -> next = NULL;
    
    head = first;
    temp = first;

    for (i=2; i<=n; i++) {
        first = (struct node*) malloc(sizeof(struct node));

        printf("Enter data for node %d: ", i);
        scanf("%d", &(first ->info));

        temp -> next = first;
        first -> next = NULL;

        temp = first;
    }
    
    temp = head;
    while (temp!= NULL) {
        printf("%d\t", temp->info);
        temp = temp->next;
    }
    return 0;

    
}
