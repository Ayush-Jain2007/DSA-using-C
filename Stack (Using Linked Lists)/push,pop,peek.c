#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int isFull(struct Node *head);
int isFull(struct Node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct Node *head);
int isEmpty(struct Node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *head, int data);
struct Node *push(struct Node *head, int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (isFull(n))
    {
        printf("Heap Overflow!\n");
    }
    else
    {
        n->data = data;
        n->next = head;
        head = n;
        return head;
    }
}

void linkedListTraversal(struct Node *head);
void linkedListTraversal(struct Node *head)
{
    while (head != NULL)
    {
        printf("Element: %d\n", head->data);
        head = head->next;
    }
}

int pop(struct Node **head);
int pop(struct Node **head){
    if (isEmpty(*head))
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        struct Node *n = *head;
        *head = (*head)->next;
        int x = n->data;
        free(n);
        return x;
    }
    
}

int main()
{
    struct Node *top = NULL;
    top = push(top, 1);
    top = push(top, 5);
    top = push(top, 11);
    top = push(top, 18);
    top = push(top, 25);
    int element = pop(&top);
    printf("Pooped element is %d\n", element);
    linkedListTraversal(top);
    return 0;
}