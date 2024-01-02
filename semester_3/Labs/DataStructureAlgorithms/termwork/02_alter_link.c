/*
    Author  :   Aakash Chauhan
    Roll no :   22021931
    Section :   IoT 
    Class Roll: 01
    Write a C program to craeate a single linked list , like  L0 -> L1 -> … -> Ln-1 -> Ln. Write another C fucntion to rearrange the nodes in the list so that the new formed list is :  L0 -> Ln -> L1 -> Ln-1 -> L2 -> Ln-2 .You are required to do this in place without altering the nodes’ values.
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
void arrange(list **);
void display(list *);

int main()
{
    // Local decleration
    list *left = NULL, *right = NULL, *l1 = NULL;
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the list\n");
    for (i = 0; i < n; i++)
    {
        create(&left, &right);
    }

    printf("Original: ");
    display(left);
    arrange(&left);
    printf("Output: ");
    display(left);
    return 0;
}

void create(list **left, list **right)
{
    // Function to create linked list
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

void arrange(list **left)
{
    // Function to arrange the list
    int i, j, count = 0, p_index;
    list *l = *left, *r;
    if (*left == NULL)
    {
        return;
    }
    while (l)
    {
        // Count nodes on list
        count++;
        l = l->next;
    }
    l = *left;
    r = *left;
    for (i = 0; i < count / 2; i++)
    {
        p_index = 0;
        r = l;
        for (j = 1; j < (count - (i * 2)); ++j)
        {
            if (r == NULL)
            {
                break;
            }
            r = r->next;
        }

        r->next = l->next;
        l->next = r;
        l = r->next;
    }
    if (count % 2)
        l->next = NULL;
    else
        r->next = NULL;
}

void display(list *left)
{
    while (left)
    {
        printf("%d ", left->data);
        left = left->next;
    }
    printf("\n");
}
