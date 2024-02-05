/*
 *  Author      :   Aakash Chauhan
 *  Date        :   August 24, 2023
 *  Problem     :   Implimentation of queue call by refrence
 */

#include <stdio.h>
#define     MAX     3

// Decleration of functions
void enqueue(int [], int *, int *);
void dequeue(int [], int *, int*);
void peek(int [], int);
void display(int [], int, int);


int main()
{
    // Local decleration
    int q[MAX], front, rear;
    int ch = 1, choice;
    front = rear = -1;
    
    // Menu
    do
    {
        printf("******** MENU ************\n");
        printf("[1] Enqueue\n");
        printf("[2] Dequeue\n");
        printf("[3] Peek\n");
        printf("[4] Display\n");
        printf("[5] Exit\n");
        scanf("%d", &choice);

        // calling according choice
        switch(choice)
        {
        case 1:
            enqueue(q, &front, &rear);
            if(front == -1)
                front = 0;
            break;
        case 2:
            dequeue(q, &front, &rear);
            break;
        case 3:
            peek(q, front);
            break;
        case 4:
            display(q, front, rear);
            break;
        case 5:
            ch = 0;
            break;
        default:
            printf("INVALID INPUT\n");
        }
    }
    while (ch);

    return 0;
}

// Definition of functions
void enqueue(int q[], int *front, int *rear)
{
    // Add element in the last of queue
    // ie. add in the last of array and after last start from begining 0

    int x;
    if (*front == (*rear + 1) % MAX)   // To check weather queue is full, once full need to dequeue all the elements
    {
        printf("Queue is full\n");
        return;
    }
    (*rear) = (*rear + 1) % MAX;
    printf("Enter the value: ");
    scanf("%d", &x);
    q[*rear] = x;

}
void dequeue(int q[], int *front, int *rear)
{
    // Remove from front of queue
    // remove first(this first is not always index 0) element of arrray after last begin from 0

    if (*front == -1)
    {
        printf("Empty Queue\n");
        return;
    }
    printf("\nValue deleted %d\n", q[*front]);
    if ((*front) % MAX == *rear)
        *front = *rear = -1;
    else
        (*front) = (*front + 1) % MAX;
}

void peek(int q[], int front)
{
    // Print front value of queue
    
    if (front == -1)
    {
        printf("Empty Queue\n");
        return;
    }
    printf("%d \n", q[front]);
}
void display(int q[], int front, int rear)
{
    // Print array in forward manner from front to rear
    
    if (front == -1)
    {
        printf("Empty Queue\n");
        return;
    }
    
    while (front != rear)
    {
        printf("%d ", q[front]);
        front = (front + 1) % MAX;
    }
    printf("%d ", q[front]);
    printf("\n");
}
