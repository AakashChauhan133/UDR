#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
} stk;

// Sending value of pointer (call by value)
void push(stk **);
void pop(stk **);
void display(stk *);


int main()
{
    stk *top = NULL;
    int ch = 1;

    while (ch)
    {
        printf("******** MENU ********\n");
        printf("[1] Push\n");
        printf("[2] Pop\n");
        printf("[3] Display\n");
        printf("[3] Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push(&top);
            break;
        case 2:
            pop(&top);
            break;
        case 3:
            display(top);
            break;
        case 4:
            ch = 0;
            break;
        default:
            printf("INVALID INPUT\n");
        }
    }
    return 0;
}

void push(stk **top)
{
    int val;
    stk *p = NULL;
    p = (stk *)malloc(sizeof(stk));

    if (!p)
    {
        printf("Stack Full\n");
        return;
    }
    printf("Enter the value: ");
    scanf("%d", &val);
    p->data = val;
    p->next = *top;
    *top = p;
}

void pop(stk **top)
{
    stk *p = NULL;
    if (!(*top))
    {
        printf("Stack Empty\n");
        return;
    }
    p = *top;
    printf("Popped value: %d\n", p->data);
    *top = (*top)->next;
    free(p);
}

void display(stk *left)
{
    if (!left)
    {
        printf("Stack Empty\n");
        return;
    }
    while (left)
    {
        printf("%d ", left->data);
        left = left->next;
    }
    printf("\n");
}

