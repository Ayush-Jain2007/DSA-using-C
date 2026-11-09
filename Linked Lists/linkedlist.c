#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main() {
    //Allocate memory for nodes in the linked lists in Heap
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 3;
    head->next = second;
    
    second->data = 8;
    second->next = third;

    third->data = 11;
    third->next = fourth;

    fourth->data = 23;
    fourth->next = NULL;

    return 0;
}