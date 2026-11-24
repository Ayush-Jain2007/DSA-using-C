#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isFull(struct stack *s);
int isFull(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *s);
int isEmpty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *sp, int val);
void push(struct stack *sp, int val)
{
    if (isFull(sp))
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = val;
    }
}

char pop(struct stack *sp);
char pop(struct stack *sp)
{
    if (isEmpty(sp))
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        char x = sp->arr[sp->top];
        sp->top--;
        return x;
    }
}

int match(char popped_ch, char stacktop);
int match(char popped_ch, char stacktop)
{
    if (popped_ch == '(' && stacktop == ')')
    {
        return 1;
    }
    if (popped_ch == '{' && stacktop == '}')
    {
        return 1;
    }
    if (popped_ch == '[' && stacktop == ']')
    {
        return 1;
    }
    return 0;
}

int paranthesisMatch(char *exp)
{
    char popped_ch;
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            popped_ch = pop(sp);
            if (!match(popped_ch, exp[i]))
            {
                return 0;
            }
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    char * exp = "{a+[b-c(]b)}";

    if (paranthesisMatch(exp))  
    {
        printf("The paranthesis is matching\n");
    }
    else
    {
        printf("The paranthesis is not matching\n");
    }

    return 0;
}