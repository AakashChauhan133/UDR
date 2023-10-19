/*
 *  Author      :   Aakash Chauhan
 *  Date        :   October 19, 2023
 *  Problem     :   Delete all nodes at the kth period
 *      INPUT   :   1 2 3 4 5
 *      k = 1
 *                  NULL
 *      k = 2
 *                  1 3 5
 *      k = 3
 *                  1 2 4 5
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
void display(node *);

int main()
{
    // Local decleration
    int i, n, k;
    node *first = NULL, *last = NULL;

    // Input section
    printf("ENTER THE NUMBERS OF NODES: ");
    scanf("%d", &n);
    printf("ENTER THE VALUE OF k: ");
    scanf("%d", &k);
    // Input in linked list
    for (i = 0; i < n; i++)
    {
        printf("ENTER THE VALUE IN NODE %d: ", i + 1);
        create(&first, &last);
    }
    display(first);
    alt_k_del(&first);
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

    if (*first == NULL) // First node is being entered
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
