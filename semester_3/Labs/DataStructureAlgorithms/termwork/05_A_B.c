/*
    Author  :   Aakash Chauhan
    Roll no :   22021931
    Section :   IoT
    Class Roll: 01
    Let A and B be two structures of type Linked List. Write a ‘C ’ program to create a new Linked List ‘S’ that contains elements alternately from A and B beginning with the first element of A. If you run out of elements in one of the lists, then append the remaining
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    int data;
    struct ListNode *next;
} list;

// Function decleration
void create(list **, list **);
void display(list *);
void create_S(list *, list *, list **);

int main()
{
    // Local decleration
    list *A_left = NULL, *A_right = NULL, *B_left = NULL, *B_right = NULL, *S = NULL;
    int n1, i;

    // Input section
    printf("Enter the size of A and B: ");
    scanf("%d", &n1);
    printf("Enter the elements of A\n");
    for (i = 0; i < n1; i++)
    {
        create(&A_left, &A_right);
    }
    printf("Enter the elements of B\n");
    for (i = 0; i < n1; i++)
    {
        create(&B_left, &B_right);
    }

    // calling funtions and output section
    create_S(A_left, B_left, &S);
    printf("OUTPUT: ");
    display(S);
    return 0;
}

void create(list **left, list **right)
{
    // function to create a singly linked list
    list *p = NULL;
    int val;
    p = (list *)malloc(sizeof(list));
    if (!p)
    {
        printf("ERROR\n");
        return;
    }
    printf("Enter the value: ");
    scanf("%d", &val);
    p->data = val;

    if (!(*left))
    {
        *left = *right = p;
    }
    else
    {
        (*right)->next = p;
        *right = p;
    }
    p->next = NULL;
}
void create_S(list *A, list *B, list **S)
{
    list *p = NULL, *q = NULL;
    while (A != NULL)
    {
        p = (list *)malloc(sizeof(list));
        p->data = A->data;
        if (*S == NULL)
        {
            *S = p;
        }
        if (q)
            q->next = p;
        q = (list *)malloc(sizeof(list));
        q->data = B->data;
        p->next = q;

        A = A->next;
        B = B->next;
    }
    if (q)
        q->next = NULL;
}

void display(list *left)
{
    // Function to display in forward manner
    while (left)
    {
        printf("%d ", left->data);
        left = left->next;
    }
    printf("\n");
}
