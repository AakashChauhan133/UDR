#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int data;
    struct queue *next;
} q;

// Sending value of pointer (call by value)
void enq(q **, q**);
void deq(q **, q **);
void display(q *);


int main()
{
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

        switch (ch)
        {
        case 1:
            enq(&rear, &front);
            break;
        case 2:
            deq(&front, &rear);
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

void enq(q **rear,q **front)
{
    int val;
    q *p = NULL;
    p = (q *)malloc(sizeof(q));

    if (!p)
    {
        printf("Queue Full\n");
        return;
    }
    printf("Enter the value: ");
    scanf("%d", &val);
    p->data = val;
    if (!(*rear))
        *rear = *front = p;
    else
    {
        (*rear)->next = p;
        *rear = p;
    }
    (*rear)->next = NULL;
}

void deq(q **front, q **rear)
{
    q *p = NULL;
    if (!(*front))
    {
        printf("Queue Empty\n");
        return;
    }
    p = *front;
    if (*front == *rear)
    {
        printf("Only Popped value: %d\n", (*front)->data);
        *front = NULL;
        *rear = NULL;
    }
    else
    {
        printf("Popped value: %d\n", (*front)->data);
        *front = (*front)->next;
    }
    free(p);
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


