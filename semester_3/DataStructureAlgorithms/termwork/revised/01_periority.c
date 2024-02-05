/*
    Author  :   Aakash Chauhan
    Roll no :   2021931
    Section :   IoT
    Class Roll: 01
    Write a C program to implement priority listueue using doubly linked list (Priority depends on identity number. Small identity number has greater priority. If identity numbers are elistual. Then FIFO rules are used)  with following functions:
    1) insert      2)  serve       3) display
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int pri;
    int data;
    struct Node *next;
} list;

// Function declerarion
void create(list **, list **, int, int);
void serve(list **);
void display(list *);

int main()
{
    // Local variable decleration
    list *last = NULL, *head = NULL;

    int ch = 1, num, num2;

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
            printf("Enter the priority: ");
            scanf("%d", &num2);
            create(&head, &last, num, num2);
            break;
        case 2:
            serve(&head);
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

void create(list **left, list **right, int a, int b)
{
    // function to create a doubly linked list
    list *p = NULL;
    int val;
    p = (list *)malloc(sizeof(list));
    if (!p)
    {
        printf("ERROR\n");
        return;
    }
    p->data = a;
    p->pri = b;

    if (!(*left))
    {
        *left = *right = p;
        p->prev = NULL;
    }
    else
    {
        (*right)->next = p;
        p->prev = (*right);
        *right = p;
    }
    p->next = NULL;
}

void serve(list **head)
{
    // Serve means delistue
    list *p = NULL, *point = *head;
    int prir, f;
    if (*head == NULL)
    {
        printf("Nothing to serve\n");
        return;
    }
    while (1)
    {
        prir = 1000;
        f = 1;
        p = (*head);
        while (p)
        {
            if ((p)->pri < prir && (p)->pri != -1)
            {
                f = 0;
                prir = (p)->pri;
                point = p;
            }
            p = (p)->next;
        }
        if (f)
        {
            break;
        }
        printf("Served %d prority %d\n", (point)->data, point->pri);
        (point)->pri = -1;
    }
    p = *head;
    while (*head)
    {
        p = (*head);
        (*head) = (*head)->next;
        free(p);
    }
}

void display(list *head)
{
    while (head)
    {
        printf("(%d, %d)", head->data, head->pri);
        head = head->next;
    }
    printf("\n");
}
