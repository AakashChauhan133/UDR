/*
    Author  :   Aakash Chauhan
    Roll no :   22021931
    Section :   IoT 
    Class Roll: 01
    Write a C program to implement priority queue using doubly linked list (Priority depends on identity number. Small identity number has greater priority. If identity numbers are equal. Then FIFO rules are used)  with following functions:
    1) insert      2)  serve       3) display
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    struct queue *prev;
    int data;
    struct queue *next;
} q;

void insert(q **, q **, int val);
void serve(q **, q **);
void display(q *);

int main()
{
    // Local variable decleration
    q *last = NULL, *head = NULL;

    int ch = 1, num;

    while (ch)
    {
        printf("****** MENU ******\n");
        printf("[1] insert\n");
        printf("[2] serve\n");
        printf("[3] display\n");
        printf("[0] exit\n");
        scanf("%d", &ch);
        switch (ch)
        {

        case 1:
            printf("Enter the value of to insert: ");
            scanf("%d", &num);
            insert(&head, &last, num);
            break;
        case 2:
            serve(&head, &last);
            break;
        case 3:
            display(head);
            break;
        case 0:
            ch = 0;
            break;
        default:
            printf("INVALID\n");
            break;
        }
    }

    return 0;
}

void insert(q **head, q **last, int val)
{
    q *p = NULL, *temp;
    p = (q *)malloc(sizeof(q));
    if (p == NULL)
    {
        printf("No memory\n");
        return;
    }
    p->data = val;
    if (*last == NULL && *head == NULL)
    {
        *head = *last = p;
        p->next = p->prev = NULL;
    }
    else if (val <= (*head)->data)
    {
        // insert at begining
        p->next = *head;
        (*head)->prev = p;
        p->prev = NULL;
        *head = p;
    }
    else if (val >= (*last)->data)
    {
        // insert after last node
        p->prev = *last;
        (*last)->next = p;
        *last = p;
        (*last)->next = NULL;
    }
    else
    {
        // temp is pointing to the first node
        temp = *head;
        while (temp)
        {
            if (temp->data >= val)
                break;
            temp = temp->next;
        }
        p->prev = temp->prev;
        p->next = temp;
        temp->prev->next = p;
        temp->prev = p;
    }
}
void serve(q **head, q **last)
{
    // Serve means deque
    q *p = NULL;
    if (*head == NULL)
    {
        printf("Nothing to serve\n");
        return;
    }
    p = *head;
    printf("Served: %d\n", p->data);
    free(p);
    if((*head)->next == NULL)
    {
        *head = NULL;
        *last = NULL;
        return;
    }
    *head = (*head)->next;
    (*head)->prev = NULL;
}

void display(q *head)
{
    while (head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
