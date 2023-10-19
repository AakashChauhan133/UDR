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
void alt_k_del(node **, int);

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
    printf("ORIGINAL: ");
    display(first);
    alt_k_del(&first, k);
    printf("AFTER DELETED: ");
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
    printf("\n");
}

void alt_k_del(node **first, int k)
{
    int count;
    node * p = *first, *q = NULL;
    if (*first == NULL)
    {
        printf("EMPTY LIST\n");
        return;
    }
    if (k == 1)
    {
        // k = 1 means all nodes to be deleted
        *first = NULL;
        return;
    }
    count = 0;  // node counter 
    while (p)
    {
        count++;
        if (count == k)
        {
            // when node counter is k
            // in this block p will never hold address of first node because k = 1 issue is resolved already
            /*
                Assume if we don't handle k = 1 (ie. delete all node) then in this if block q is pointing to null
                q = NULL and p = *first
                ERROR:
                    q->next (ie. NULL->next) this do not exist
            */
            q->next = p->next;
            free(p);
            p = q->next;
            count = 0;
            continue;
        }
        // q is following p 
        q = p;
        p = p->next;
    }
    
}