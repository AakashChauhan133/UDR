/*
 *  Author      :   Aakash Chauhan
 *  Date        :   September 4, 2023
 *  Problem     :   queue using linked list
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int data;
    struct queue *next;
} q;

// Sending value of pointer (call by value)
q* enq(q *);
q* deq(q *, q *);
void display(q *);


int main()
{
    // Local decleration
    q *rear = NULL, *front = NULL;
    int ch = 1;

    while (ch)
    {
        printf("******** MENU ********\n");
        printf("[1] Enque\n");
        printf("[2] Deque\n");
        printf("[3] Display\n");
        printf("[4] Exit\n");
        scanf("%d", &ch);

        // calling according choice
        switch (ch)
        {
        case 1:
            rear = enq(rear);
            if (front == NULL)
                front = rear;
            break;
        case 2:
            front = deq(front, rear);
            if (front == NULL)
                rear = front;
            break;
        case 3:
            display(front);
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

q* enq(q *rear)
{
    // insert at the last of the queue
    // insert at the left of queue
    
    int val;
    q *p = NULL;
    p = (q *)malloc(sizeof(q));

    if (!p)
    {
        printf("Queue Full\n");
        return rear;
    }
    printf("Enter the value: ");
    scanf("%d", &val);
    p->data = val;
    if (!rear)
        rear = p;
    else
    {
        rear->next = p;
        rear = p;
    }
    rear->next = NULL;
    return rear;
}

q *deq(q *front, q *rear)
{
    q *p = NULL;
    if (!front)
    {
        printf("Queue Empty\n");
        return front;
    }
    p = front;
    if (front == rear)
    {
        printf("Only Popped value: %d\n", front->data);
        front = NULL;
        front = NULL;
    }
    else
    {
        printf("Popped value: %d\n", front->data);
        front = front->next;
    }
    free(p);
    return front;
}

void display(q *left)
{
    if (!left)
    {
        printf("Queue Empty\n");
        return;
    }
    while (left)
    {
        printf("%d ", left->data);
        left = left->next;
    }
    printf("\n");
}


