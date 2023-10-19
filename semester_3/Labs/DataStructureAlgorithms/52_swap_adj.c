/*
 *  Author      :   Aakash Chauhan
 *  Date        :   October 19, 2023
 *  Problem     :   swap adjacent nodes of a linked list
 *      INPUT   : 1 2 3 4 5
 *      OUTPUT  : 2 1 4 3 5
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    int data;
    struct ListNode *next;
} node;

// Function defintion 
void create(node **, node **);
void swap(node **);
void swapint(int *, int *);
void display(node *);

int main()
{
    // Local decleration
    node *first = NULL, *last = NULL;
    int i, n;

    // Input Section
    printf("ENTER THE NUMBER OF NODES: ");
    scanf("%d", &n);
    // Linked list Input
    for (i = 0; i < n; i++)
    {
        printf("ENTER DATA IN NODE %d: ", i + 1);
        create(&first, &last);
    }

    // calling functions
    swap(&first);
    display(first);

    return 0;
}

void create(node **first, node **last)
{
    // Function to create singly linked list by adding nodes in the right of list
    node *p = NULL;
    p = (node *)malloc(sizeof(node));
    if (p == NULL)
    {
        // System is not able to allocate memory
        printf("ERROR IN ALLOCATION\n");
        return;
    }
    // Input value in the linked list
    scanf("%d", &(p->data));

    if (*first == NULL)     // First node is being entered
        *first = p;
    else
        (*last)->next = p;
    (*last) = p;
    (*last)->next = NULL;
}

void display(node *first)
{
    // Simple display from left to right
    while (first)
    {
        printf("%d ", first->data);
        first = first->next;
    }
}

void swap(node **first)
{
    // function to swap the value of adjacent node (note that it is not swaping nodes it is swaping values)
    node *p = *first, *q = NULL;
    if (*first == NULL)
    {
        printf("NO NODE\n");
        return;
    }
    if ((*first)->next == NULL)
    {
        printf("NO NODE TO SWAP\n");
        return;
    }
    q = p;
    p = p->next;
    while (p)
    {
        swapint(&(p->data), &(q->data));
        if (p->next == NULL)
            break;
        q = p->next;
        p = q->next;
    }
}

void swapint(int *a, int *b)
{
    // function to swap two intigers
    int temp = *a;
    *a = *b;
    *b = temp;
}