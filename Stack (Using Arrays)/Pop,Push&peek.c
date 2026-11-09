#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *s)
{
    if (s->size == s->top + 1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *s);
void push(struct stack *s)
{
    if (isFull(s))
    {
        return;
    }
    printf("Enter an Element: ");
    scanf("%d", &s->arr[++s->top]);
}

void pop(struct stack *s);
void pop(struct stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        s->top--;
    }
}

int peek(struct stack *s, int i)
{
    if (s->top - i + 1 < 0)
    {
        printf("Invalid Position");
        return -1;
    }
    else
    {
        return s->arr[s->top - i + 1];
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    do
    {
        push(sp);
    } while (!isFull(sp));

    if (isFull(sp))
    {
        printf("Stack Overflow\n");
    }

    int num = sp->top;
    int i = 0;
    while (i <= num)
    {
        printf("%d\t", sp->arr[i++]);
    }
    printf("\n");
    printf("\n");

    // pop(sp);
    // i = 0;
    // while (i <= num)
    // {
    //     printf("%d\t", sp->arr[i++]);
    // }
    // printf("\n");

    // pop(sp);
    // i = 0;
    // while (i <= num)
    // {
    //     printf("%d\t", sp->arr[i++]);
    // }

    // for (int i = 0; i <= sp->top + 1; i++)
    // {
    //     printf("\nvalue at index %d is %d\n", i, peek(sp, i));
    // }
    

    return 0;
}