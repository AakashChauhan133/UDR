#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
} stk;

// Sending value of pointer (call by value)
stk* push(stk *, int);

void display(stk *);

int main()
{
    stk *top1 = NULL, *top2 = NULL;
    int i;
    for (i = 0; i < 50; i++)
    {
        top1 = push(top1, i+1);
        top2 = push(top2, i+51);
    }
    display(top1);
    display(top2);

    return 0;
}

stk* push(stk *top, int val)
{
    stk *p = NULL;
    p = (stk *)malloc(sizeof(stk));

    if (!p)
    {
        printf("Stack Full\n");
        return top;
    }
    p->data = val;
    p->next = top;
    top = p;
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


