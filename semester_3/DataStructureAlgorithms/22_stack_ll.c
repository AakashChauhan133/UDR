/*
 *  Author      :   Aakash Chauhan
 *  Date        :   September 4, 2023
 *  Problem     :   stack using linked list
 */

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
    // Local decleration
    stk *top = NULL;
    int ch = 1;

    while (ch)
    {
        printf("******** MENU ********\n");
        printf("[1] Push\n");
        printf("[2] Pop\n");
        printf("[3] Display\n");
        printf("[4] Exit\n");
        scanf("%d", &ch);

        // calling according choice
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
    // push on the top of stack
    // insert at the left of linked list

    int val;
    stk *p = NULL;
    p = (stk *)malloc(sizeof(stk));

    if (!p)
    {
        printf("No memory\n");
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
    // pop value from top of stack
    // remove first node of linked list

    stk *p = NULL;
    if (top == NULL)
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
    // Display linked list in forward manner
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

