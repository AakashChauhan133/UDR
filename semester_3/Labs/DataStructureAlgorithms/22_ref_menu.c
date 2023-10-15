#include <stdio.h>
#include <stdlib.h>
#define     MAX     5

void push(int [], int*);
void pop(int [], int*);
int peek(int [], int);
void display(int [], int);

int main()
{
    int a[MAX], top;
    int ch = 1, choice;
    top = -1;

    do
    {
        printf("************MENU************\n");
        printf("[1] Push\n");
        printf("[2] POP\n");
        printf("[3] PEEK\n");
        printf("[4] DISPLAY\n");
        printf("[5] EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push(a, &top);
            break;
        case 2:
            pop(a, &top);
            break;
        case 3:
            printf("Peek value: %d\n", peek(a, top));
            break;
        case 4:
            display(a, top);
            break;
        case 5:
            exit(1);
        }
    }
    while(ch);

    return 0;
}
void push(int a[], int *top)
{
    int val;
    if(*top >= MAX - 1)
        printf("Stack is full\n");
    else
    {
        printf("Enter the value to push: ");
        scanf("%d", &val);
        (*top)++;
        a[*top] = val;
    }
}
void pop(int a[], int *top)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return top;
    }
    printf("POPPED: %d\n", a[*top]);
    (*top)--;
}
int peek(int a[], int top)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return a[top];
}
void display(int a[], int top)
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    for (i = top; i >= 0; i--)
        printf("%d\n", a[i]);
}
