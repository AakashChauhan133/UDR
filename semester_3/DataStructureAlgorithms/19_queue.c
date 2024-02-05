/*
 *  Author      :   Aakash Chauhan
 *  Date        :   August 24, 2023
 *  Problem     :   Implimentation of queue call by refrence
 */

#include <stdio.h>
#define MAX 5

// Decleration of functions
void enqueue(int[], int *, int *);
void dequeue(int[], int *, int *);
void peek(int[], int);
void display(int[], int, int);

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
        switch (choice)
        {
        case 1:
            enqueue(q, &front, &rear);
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
    } while (ch);

    return 0;
}

// Definition of functions
void enqueue(int q[], int *front, int *rear)
{
    // Add element in the last of queue
    // ie. add in the last of array(expand from last)

    int x;
    if (*rear >= MAX - 1) // To check weather queue is full, once full need to dequeue all the elements
    {
        printf("Queue is full\n");
        return;
    }
    (*rear)++;
    printf("Enter the value: ");
    scanf("%d", &x);
    q[*rear] = x;
    if (*front == -1)
        *front = 0;
}
void dequeue(int q[], int *front, int *rear)
{
    // Remove from front of queue
    // remove first(this first is not always index 0) element of arrray(shrink array from front)

    if (*front == -1)
    {
        printf("Empty Queue\n");
        return;
    }
    printf("%d\n", q[*front]);
    if (*front == *rear)
        *front = *rear = -1;
    else
        (*front)++;
}
void peek(int q[], int front)
{
    // Print front value of queue

    if (front == -1)
    {
        printf("Empty Queue\n");
        return;
    }
    printf("\n%d \n", q[front]);
}
void display(int q[], int front, int rear)
{
    // Print array in forward manner from front to rear

    int i;
    if (front == -1)
    {
        printf("Empty Queue\n");
        return;
    }
    for (i = front; i <= rear; i++)
        printf("%d ", q[i]);
    printf("\n");
}
