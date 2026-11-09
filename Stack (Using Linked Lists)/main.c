#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;


void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct node *s)
{
    if (s == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(struct node *s)
{
    if (s == NULL)
    {
        return 1;
    }
    return 0;
}

struct node *push(struct node *top, int x)
{
    struct node *a = (struct node *)malloc(sizeof(struct node));
    if (isFull(a))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        a->data = x;
        a->next = top;
        top = a;
        return top;
    }
}

int pop(struct node *tp)
{
    if (isEmpty(tp))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct node *n = tp;
        top = tp->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    top = push(top, 11);
    top = push(top, 8);
    top = push(top, 3);
    top = push(top, 5);
    top = push(top, 10);
    top = push(top, 7);
    top = push(top, 15);
    top = push(top, 19);
    linkedListTraversal(top);
    int num = pop(top);
    printf("\nPopped Element is %d\n",num);
    linkedListTraversal(top);
    return 0;
}