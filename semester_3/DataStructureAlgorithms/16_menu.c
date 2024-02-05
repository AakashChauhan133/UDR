/*
 *  Author: Aakash Chauhan
 *  Date: Aug 16, 2023
 *  implementation of Stack using array call by value 
 */

#include <stdio.h>
#include <stdlib.h>
#define     MAX     5

// Function definition
int push(int [], int);
int pop(int [], int);
int peek(int [], int);
void display(int [], int);

int main()
{
    // Local decleration
    int a[MAX], top;
    int ch = 1, choice;
    top = -1;

    do
    {
        // Input section
        printf("************MENU************\n");
        printf("[1] Push\n");
        printf("[2] POP\n");
        printf("[3] PEEK\n");
        printf("[4] DISPLAY\n");
        printf("[5] EXIT\n");
        scanf("%d", &choice);
        
        // calling according choice
        switch (choice)
        {
        case 1:
            top = push(a, top);
            break;
        case 2:
            top = pop(a, top);
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

int push(int a[], int top)
{
    // push value at the top of stack
    // that is push at the last of array

    int val;
    if(top >= MAX - 1)
        printf("Stack is full\n");
    else
    {
        printf("Enter the value to push: ");
        scanf("%d", &val);
        top++;
        a[top] = val;
    }
    return top;
}

int pop(int a[], int top)
{
    // Pop from the top of stack
    // ie. remove from last of array (shrink array from last)

    if (top == -1)
    {
        printf("Stack is empty\n");
        return top;
    }
    printf("POPPED: %d\n", a[top]);
    top--;
    return top;
}

int peek(int a[], int top)
{
    // Print value at the top of stack

    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return a[top];
}

void display(int a[], int top)
{
    // Display from top to bottom of stack
    // ie. print array in reverse order
     
    int i;
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    for (i = top; i >= 0; i--)
        printf("%d\n", a[i]);
}
