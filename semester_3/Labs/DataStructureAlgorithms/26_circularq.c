#include <stdio.h>
#define     MAX     3

void enqueue(int [], int *, int *);
void dequeue(int [], int *, int*);
void peek(int [], int);
void display(int [], int, int);


int main()
{
    int q[MAX], front, rear;
    int ch = 1, choice;
    front = rear = -1;
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


void enqueue(int q[], int *front, int *rear)
{
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
    if (*front == -1)
    {
        printf("Empty Queue\n");
        return;
    }
    printf("\nValue deleted %d\n", q[*front]);
//    (*front)++;
    if ((*front + 1) % MAX == *rear)
        *front = *rear = -1;
    else
        (*front) = (*front + 1) % MAX;
}
void peek(int q[], int front)
{
    if (front == -1)
    {
        printf("Empty Queue\n");
        return;
    }
    printf("%d \n", q[front]);
}
void display(int q[], int front, int rear)
{
    if (front == -1)
    {
        printf("Empty Queue\n");
        return;
    }
    do
    {
        printf("%d ", q[front]);
        front = (front + 1) % MAX;
    }
    while (front != rear);
    printf("%d ", q[front]);
    printf("\n");
}
