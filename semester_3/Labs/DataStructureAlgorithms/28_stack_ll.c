#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
} stk;

// Sending value of pointer (call by value)
stk* push(stk *);
stk* pop(stk *);
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
            top = push(top);
            break;
        case 2:
            top = pop(top);
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

stk* push(stk *top)
{
    int val;
    stk *p = NULL;
    p = (stk *)malloc(sizeof(stk));

    if (!p)
    {
        printf("Stack Full\n");
        return top;
    }
    printf("Enter the value: ");
    scanf("%d", &val);
    p->data = val;
    p->next = top;
    top = p;
    return top;
}

stk *pop(stk *top)
{
    stk *p = NULL;
    if (!top)
    {
        printf("Stack Empty\n");
        return top;
    }
    p = top;
    top = top->next;
    free(p);
    return top;
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

