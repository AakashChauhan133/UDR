/*
 *  Author      :   Aakash Chauhan
 *  Section     :   IoT
 *  Roll Number :   1
 *  Problem     :   Implimentation of queue
 */

#include <stdio.h>
#define     MAX     5

// Decleration of functions
int enqueue(int [], int);
int dequeue(int [], int);
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
        switch(choice)
        {
        case 1:
            rear = enqueue(q, rear);
            if (front == -1)        //      To move front while pushing element at index 0
                front = 0;
            break;
        case 2:
            front = dequeue(q, front);
            if (front > rear)       //      Resetting front and rear when queue is empty
                front = rear = -1;
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
int enqueue(int q[], int rear)
{
    int x;
    if (rear == MAX - 1)
    {
        printf("Queue is full\n");
        return rear;
    }
    rear++;
    printf("Enter the value: ");
    scanf("%d", &x);
    q[rear] = x;
    return rear;
}
int dequeue(int q[], int front)
{
    if (front == -1)
    {
        printf("Empty Queue\n");
        return front;
    }
    printf("Dequeued element: %d\n", q[front]);
    front++;
    return front;
}
void peek(int q[], int front)
{
    if (front == -1)
    {
        printf("Empty Queue\n");
        return;
    }
    printf("Peek element: %d \n", q[front]);
}
void display(int q[], int front, int rear)
{
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
